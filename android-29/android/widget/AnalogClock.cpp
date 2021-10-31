#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "./AnalogClock.hpp"

namespace android::widget
{
	// Fields
	
	AnalogClock::AnalogClock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnalogClock::AnalogClock(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AnalogClock::AnalogClock(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AnalogClock::AnalogClock(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	AnalogClock::AnalogClock(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::widget

