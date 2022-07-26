#ifndef OPENMC_TALLIES_FILTERMATCH_H
#define OPENMC_TALLIES_FILTERMATCH_H


namespace openmc {

//==============================================================================
//! Stores bins and weights for filtered tally events.
//==============================================================================

class FilterMatch
{
public:
  std::vector<int> bins_;
  std::vector<double> weights_;
  std::vector<double> x_starts_; // Special x-coordinates information needed for
                                 // for IMA tally 
  int i_bin_;
  bool bins_present_ {false};
};

} // namespace openmc
#endif // OPENMC_TALLIES_FILTERMATCH_H
