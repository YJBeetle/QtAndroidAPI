#include "../content/Context.hpp"
#include "./DigitalClock.hpp"

namespace android::widget
{
	// Fields
	
	DigitalClock::DigitalClock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DigitalClock::DigitalClock(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DigitalClock",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	DigitalClock::DigitalClock(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DigitalClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring DigitalClock::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace android::widget

