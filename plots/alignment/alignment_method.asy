import root;
import pad_layout;

string topDir = "../../";

string dataset = "DS-xangle-130";
string period = "4";
int period_idx = 1; // period index in global graph
string unit = "R_1_F";

string f = topDir + dataset + "/alignment.root";
string dir = "period "+period+"/unit "+unit;

transform xyswitch = (0, 0, 0, 1, 1, 0);

//TGraph_reducePoints = 10;
//TGraph_N_limit = 1000;

real x_min = -2, x_max = 2;
real y_min = -2, y_max = +6;

//----------------------------------------------------------------------------------------------------

real GetYResult()
{
	RootObject obj = RootGetObject(f, "global/"+unit+"/c");
	real x[] = { 0. };
	real y[] = { 0. };
	obj.vExec("GetPoint", period_idx, x, y);

	write(x[0]);
	write(y[0]);

	return y[0] * 1e-3;
}

//----------------------------------------------------------------------------------------------------

NewPad(false);
label("{\SetFontSizesXX hit distribution}");

NewPad(false);

NewPad(false);
label("{\SetFontSizesXX vertical centre}");

//--------------------
NewRow();

NewPad("$x\ung{mm}$", "$y\ung{mm}$");
//draw(xyswitch, RootGetObject(f, dir+"/horizontal/horizontal graph fit/horizontal fit|merged"), "p");
draw(RootGetObject(topDir+dataset+"/distributions_45b_56t.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p", black+1pt);
draw(RootGetObject(topDir+dataset+"/distributions_45t_56b.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p", black+1pt);

limits((x_min, y_min), (x_max, y_max), Crop);

NewPad(false, autoSize=false);
draw((0, 0)--(50, 0), EndArrow);


NewPad("number of entries", "$y\ung{mm}$");
draw(xyswitch, RootGetObject(f, dir+"/vertical/y_hist|y_hist_range"), "vl", black);
real y_beam = GetYResult();
draw((0, y_beam)--(400, y_beam), blue+1pt);
limits((0, y_min), (80, y_max), Crop);

//--------------------
NewRow();

NewPad(false, autoSize=false);
draw((0, 0)--(0, -50), EndArrow);

NewPad(false, autoSize=false);

NewPad(false, autoSize=false);
draw((0, 0)--(0, -50), EndArrow);

//--------------------
NewRow();

NewPad(false);
label("{\SetFontSizesXX elastic peak axis}");

NewPad(false);

NewPad(false);
label("{\SetFontSizesXX intersection: beam position}");

//--------------------
NewRow();

NewPad("$x\ung{mm}$", "$y\ung{mm}$");
//draw(xyswitch, RootGetObject(f, dir+"/horizontal/horizontal graph fit/horizontal fit|merged"), "p");
draw(RootGetObject(topDir+dataset+"/distributions_45b_56t.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p", black+1pt);
draw(RootGetObject(topDir+dataset+"/distributions_45t_56b.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p", black+1pt);
draw(xyswitch, RootGetObject(f, dir+"/horizontal/horizontal profile/p"), "d0,eb", heavygreen+1pt);
draw(xyswitch, RootGetObject(f, dir+"/horizontal/horizontal graph fit/horizontal fit|ff"), "l", red+1pt);
limits((x_min, y_min), (x_max, y_max), Crop);

NewPad(false, autoSize=false);
draw((0, 0)--(50, 0), EndArrow);

NewPad("$x\ung{mm}$", "$y\ung{mm}$");
draw(xyswitch, RootGetObject(f, dir+"/horizontal/horizontal graph fit/horizontal fit|ff"), "l", red+1pt);
draw((-10, y_beam)--(+10, y_beam), blue+1pt);
limits((x_min, y_min), (x_max, y_max), Crop);

GShipout(hSkip=2mm, vSkip=0mm);
