#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.0_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.10_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.11_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.12_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.13_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.14_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.15_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.16_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.17_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.18_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.19_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.1_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.20_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.21_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.22_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.23_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.24_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.25_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.26_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.27_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.28_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.29_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.2_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.30_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.31_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.32_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.33_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.34_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.35_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.36_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.37_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.38_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.39_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.3_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.40_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.41_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.4_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.5_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.6_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.7_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.8_re_reco.root",
		"root://eostotem.cern.ch//eos/cms/store/group/phys_pps/reconstruction/2018/alignment_run_September/version6/run_323316.9_re_reco.root"
	};
}
