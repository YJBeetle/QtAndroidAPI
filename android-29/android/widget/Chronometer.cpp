#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./Chronometer.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	Chronometer::Chronometer(QAndroidJniObject obj) : android::widget::TextView(obj) {}
	
	// Constructors
	Chronometer::Chronometer(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Chronometer::Chronometer(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Chronometer::Chronometer(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Chronometer::Chronometer(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jstring Chronometer::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong Chronometer::getBase()
	{
		return callMethod<jlong>(
			"getBase",
			"()J"
		);
	}
	jstring Chronometer::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Chronometer::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Chronometer::getOnChronometerTickListener()
	{
		return callObjectMethod(
			"getOnChronometerTickListener",
			"()Landroid/widget/Chronometer$OnChronometerTickListener;"
		);
	}
	jboolean Chronometer::isCountDown()
	{
		return callMethod<jboolean>(
			"isCountDown",
			"()Z"
		);
	}
	jboolean Chronometer::isTheFinalCountDown()
	{
		return callMethod<jboolean>(
			"isTheFinalCountDown",
			"()Z"
		);
	}
	void Chronometer::setBase(jlong arg0)
	{
		callMethod<void>(
			"setBase",
			"(J)V",
			arg0
		);
	}
	void Chronometer::setCountDown(jboolean arg0)
	{
		callMethod<void>(
			"setCountDown",
			"(Z)V",
			arg0
		);
	}
	void Chronometer::setFormat(jstring arg0)
	{
		callMethod<void>(
			"setFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Chronometer::setOnChronometerTickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnChronometerTickListener",
			"(Landroid/widget/Chronometer$OnChronometerTickListener;)V",
			arg0.object()
		);
	}
	void Chronometer::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void Chronometer::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::widget

