#ifndef SRC_SPELLCHECKER_HUNSPELL_H_
#define SRC_SPELLCHECKER_HUNSPELL_H_

#include "spellchecker.h"

namespace spellchecker {

class HunspellSpellchecker : public SpellcheckerImplementation {
public:
  void SetDictionaryDirectory(const std::string& path);
  std::vector<std::string> GetCorrectionsForMisspelling(const std::string& word);
  bool IsMisspelled(const std::string& word);
};

}  // namespace spellchecker

#endif  // SRC_SPELLCHECKER_MAC_H_