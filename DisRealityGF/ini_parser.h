#pragma once

#include <string>
#include <unordered_map>

namespace ini {
  using Section = std::unordered_map<std::string, std::string>;

  class Document {
  private:
    std::unordered_map<std::string, Section> sections;

  public:
    Section& AddSection(const std::string& name);
    const Section& GetSection(const std::string& name) const;
  };

  Document Load(const std::string& filename);
}