#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Chronometer.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Chronometer::Chronometer(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Chronometer::Chronometer(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Chronometer::Chronometer(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Chronometer::Chronometer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.Chronometer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString Chronometer::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jlong Chronometer::getBase() const
	{
		return callMethod<jlong>(
			"getBase",
			"()J"
		);
	}
	inline JString Chronometer::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Chronometer::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Chronometer::getOnChronometerTickListener() const
	{
		return callObjectMethod(
			"getOnChronometerTickListener",
			"()Landroid/widget/Chronometer$OnChronometerTickListener;"
		);
	}
	inline jboolean Chronometer::isCountDown() const
	{
		return callMethod<jboolean>(
			"isCountDown",
			"()Z"
		);
	}
	inline jboolean Chronometer::isTheFinalCountDown() const
	{
		return callMethod<jboolean>(
			"isTheFinalCountDown",
			"()Z"
		);
	}
	inline void Chronometer::setBase(jlong arg0) const
	{
		callMethod<void>(
			"setBase",
			"(J)V",
			arg0
		);
	}
	inline void Chronometer::setCountDown(jboolean arg0) const
	{
		callMethod<void>(
			"setCountDown",
			"(Z)V",
			arg0
		);
	}
	inline void Chronometer::setFormat(JString arg0) const
	{
		callMethod<void>(
			"setFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Chronometer::setOnChronometerTickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnChronometerTickListener",
			"(Landroid/widget/Chronometer$OnChronometerTickListener;)V",
			arg0.object()
		);
	}
	inline void Chronometer::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void Chronometer::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"

