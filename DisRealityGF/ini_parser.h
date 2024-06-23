#pragma once

#include <string>
#include <unordered_map>

namespace ini {
  using Section = std::unordered_map<std::string, std::string>;

  class Document {
  private:
    std::unordered_map<std::string, Section> sections;

  public:
    Section& addSection(const std::string& name);
    const Section& getSection(const std::string& name) const;
  };

  Document load(const std::string& filename);
}