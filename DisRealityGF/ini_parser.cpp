#include "ini_parser.h"
#include <iostream>
#include <format>
#include <fstream>

namespace ini {
	/**
	 * @brief create the new empty section in document and return it
	 * @param the name of the new section
	 * @return the empty section
	*/
	Section& Document::addSection(const std::string& name) {
		return sections[name];
	}

	/**
	 * @brief return the section from ini document with its records
	 * @param the section name
	 * @return the section from ini document with its records
	*/
	const Section& Document::getSection(const std::string& name) const {
		return sections.at(name);
	}
	/**
	 * @brief read from the ini file and create the object contains all its sections
	 * @param the filename path
	 * @return the object of the Document class
	*/
	Document load(const std::string& filename) {
		Document doc;
		Section* section = nullptr;
		std::ifstream ifs(filename);
		if (ifs) {
			std::string str;
			while (std::getline(ifs, str)) {
				if (!str.empty()) {
					if (str[0] == '[') {
						std::string sectionName(str.substr(1, str.size() - 2));
						section = &doc.addSection(sectionName);
					}
					else {
						size_t pos = str.find("=");
						section->insert({ str.substr(0, pos), str.substr(pos + 1) });
					}
				}
			}
		}
		else {
			std::cout << std::format("File not found at: {}\n", filename);
		}
		return doc;
	}
}