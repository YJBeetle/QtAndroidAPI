#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Chronometer.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	Chronometer::Chronometer(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Chronometer::Chronometer(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Chronometer::Chronometer(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Chronometer::Chronometer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString Chronometer::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jlong Chronometer::getBase() const
	{
		return callMethod<jlong>(
			"getBase",
			"()J"
		);
	}
	JString Chronometer::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Chronometer::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
	JObject Chronometer::getOnChronometerTickListener() const
	{
		return callObjectMethod(
			"getOnChronometerTickListener",
			"()Landroid/widget/Chronometer$OnChronometerTickListener;"
		);
	}
	jboolean Chronometer::isCountDown() const
	{
		return callMethod<jboolean>(
			"isCountDown",
			"()Z"
		);
	}
	jboolean Chronometer::isTheFinalCountDown() const
	{
		return callMethod<jboolean>(
			"isTheFinalCountDown",
			"()Z"
		);
	}
	void Chronometer::setBase(jlong arg0) const
	{
		callMethod<void>(
			"setBase",
			"(J)V",
			arg0
		);
	}
	void Chronometer::setCountDown(jboolean arg0) const
	{
		callMethod<void>(
			"setCountDown",
			"(Z)V",
			arg0
		);
	}
	void Chronometer::setFormat(JString arg0) const
	{
		callMethod<void>(
			"setFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Chronometer::setOnChronometerTickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnChronometerTickListener",
			"(Landroid/widget/Chronometer$OnChronometerTickListener;)V",
			arg0.object()
		);
	}
	void Chronometer::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void Chronometer::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::widget

