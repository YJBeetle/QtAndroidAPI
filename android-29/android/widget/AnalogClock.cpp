#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "./AnalogClock.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	AnalogClock::AnalogClock(QJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	AnalogClock::AnalogClock(android::content::Context arg0)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AnalogClock::AnalogClock(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AnalogClock::AnalogClock(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AnalogClock::AnalogClock(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.AnalogClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::widget

