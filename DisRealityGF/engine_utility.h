#pragma once

namespace dr {
  class EngineUtility
  {
  public:
    EngineUtility() = delete;
    static size_t getRandomInRange(size_t min, size_t max);
  };
}