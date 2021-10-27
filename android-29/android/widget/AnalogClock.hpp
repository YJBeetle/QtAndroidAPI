#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}

namespace android::widget
{
	class AnalogClock : public android::view::View
	{
	public:
		// Fields
		
		AnalogClock(QAndroidJniObject obj);
		// Constructors
		AnalogClock(android::content::Context &arg0);
		AnalogClock(android::content::Context &arg0, __JniBaseClass &arg1);
		AnalogClock(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		AnalogClock(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		AnalogClock() = default;
		
		// Methods
	};
} // namespace android::widget

