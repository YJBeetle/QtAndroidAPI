#include "../content/Context.hpp"
#include "./TextClock.hpp"

namespace android::widget
{
	// Fields
	jstring TextClock::DEFAULT_FORMAT_12_HOUR()
	{
		return getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_12_HOUR",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TextClock::DEFAULT_FORMAT_24_HOUR()
	{
		return getStaticObjectField(
			"android.widget.TextClock",
			"DEFAULT_FORMAT_24_HOUR",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	// QJniObject forward
	TextClock::TextClock(QJniObject obj) : android::widget::TextView(obj) {}
	
	// Constructors
	TextClock::TextClock(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TextClock::TextClock(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TextClock::TextClock(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TextClock::TextClock(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::TextView(
			"android.widget.TextClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jstring TextClock::getFormat12Hour()
	{
		return callObjectMethod(
			"getFormat12Hour",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TextClock::getFormat24Hour()
	{
		return callObjectMethod(
			"getFormat24Hour",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TextClock::getTimeZone()
	{
		return callObjectMethod(
			"getTimeZone",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TextClock::is24HourModeEnabled()
	{
		return callMethod<jboolean>(
			"is24HourModeEnabled",
			"()Z"
		);
	}
	void TextClock::onVisibilityAggregated(jboolean arg0)
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void TextClock::refreshTime()
	{
		callMethod<void>(
			"refreshTime",
			"()V"
		);
	}
	void TextClock::setFormat12Hour(jstring arg0)
	{
		callMethod<void>(
			"setFormat12Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextClock::setFormat24Hour(jstring arg0)
	{
		callMethod<void>(
			"setFormat24Hour",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextClock::setTimeZone(jstring arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::widget

