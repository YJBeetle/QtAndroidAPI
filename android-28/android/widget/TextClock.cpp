#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TextClock.hpp"

namespace android::widget
{
	// Fields
	JString TextClock::DEFAULT_FORMAT_12_HOUR()
	{
		return getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_12_HOUR",
			"Ljava/lang/CharSequence;"
		);
	}
	JString TextClock::DEFAULT_FORMAT_24_HOUR()
	{
		return getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_24_HOUR",
			"Ljava/lang/CharSequence;"
		);
	}
	
	// QAndroidJniObject forward
	TextClock::TextClock(QAndroidJniObject obj) : android::widget::TextView(obj) {}
	
	// Constructors
	TextClock::TextClock(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TextClock::TextClock(android::content::Context arg0, JObject arg1)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TextClock::TextClock(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TextClock::TextClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString TextClock::getFormat12Hour() const
	{
		return callObjectMethod(
			"getFormat12Hour",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString TextClock::getFormat24Hour() const
	{
		return callObjectMethod(
			"getFormat24Hour",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString TextClock::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;"
		);
	}
	jboolean TextClock::is24HourModeEnabled() const
	{
		return callMethod<jboolean>(
			"is24HourModeEnabled",
			"()Z"
		);
	}
	void TextClock::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void TextClock::setFormat12Hour(JString arg0) const
	{
		callMethod<void>(
			"setFormat12Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextClock::setFormat24Hour(JString arg0) const
	{
		callMethod<void>(
			"setFormat24Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void TextClock::setTimeZone(JString arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

