#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class DigitalClock : public android::widget::TextView
	{
	public:
		// Fields
		
		DigitalClock(QAndroidJniObject obj);
		// Constructors
		DigitalClock(android::content::Context &arg0);
		DigitalClock(android::content::Context &arg0, __JniBaseClass &arg1);
		DigitalClock() = default;
		
		// Methods
		jstring getAccessibilityClassName();
	};
} // namespace android::widget

