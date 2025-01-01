#include "time_bar.h"

namespace dr
{
  void TimeBar::init(sf::Vector2f pos, sf::Vector2f size, float time)
  {
    mPosition = pos;
    mTotalSize = size;
    mTotalTime = time;
    mTimeBar.setSize(mTotalSize);
    mTimeBar.setFillColor(mColor);
    mTimeBar.setPosition(mPosition);
    mWidthPerTime = mTotalSize.x / mTotalTime;
    reset();
  }

  void TimeBar::start()
  {
    mRunning = true;
  }

  void TimeBar::reset()
  {
    mCurrentSize = mTotalSize;
    mCurrentTime = mTotalTime;
  }

  void TimeBar::update(float dt)
  {
    mCurrentTime -= dt;
    if (mCurrentTime <= 0) {
      mRunning = false;
    }
    else {
      mCurrentSize.x = mCurrentTime * mWidthPerTime;
      mTimeBar.setSize(mCurrentSize);
    }
  }

  void TimeBar::render(sf::RenderWindow& window)
  {
    window.draw(mTimeBar);
  }
}