#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TextClock.def.hpp"

namespace android::widget
{
	// Fields
	inline JString TextClock::DEFAULT_FORMAT_12_HOUR()
	{
		return getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_12_HOUR",
			"Ljava/lang/CharSequence;"
		);
	}
	inline JString TextClock::DEFAULT_FORMAT_24_HOUR()
	{
		return getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_24_HOUR",
			"Ljava/lang/CharSequence;"
		);
	}
	
	// Constructors
	inline TextClock::TextClock(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TextClock::TextClock(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TextClock::TextClock(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TextClock::TextClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString TextClock::getFormat12Hour() const
	{
		return callObjectMethod(
			"getFormat12Hour",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString TextClock::getFormat24Hour() const
	{
		return callObjectMethod(
			"getFormat24Hour",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString TextClock::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean TextClock::is24HourModeEnabled() const
	{
		return callMethod<jboolean>(
			"is24HourModeEnabled",
			"()Z"
		);
	}
	inline void TextClock::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	inline void TextClock::refreshTime() const
	{
		callMethod<void>(
			"refreshTime",
			"()V"
		);
	}
	inline void TextClock::setFormat12Hour(JString arg0) const
	{
		callMethod<void>(
			"setFormat12Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextClock::setFormat24Hour(JString arg0) const
	{
		callMethod<void>(
			"setFormat24Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextClock::setTimeZone(JString arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
