#include "../../content/Context.hpp"
#include "../../../java/text/DateFormat.hpp"
#include "../../../java/util/Calendar.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateFormat.hpp"

namespace android::text::format
{
	// Fields
	
	// QAndroidJniObject forward
	DateFormat::DateFormat(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateFormat::DateFormat()
		: JObject(
			"android.text.format.DateFormat",
			"()V"
		) {}
	
	// Methods
	jstring DateFormat::format(jstring arg0, java::util::Calendar arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Calendar;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring DateFormat::format(jstring arg0, java::util::Date arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;Ljava/util/Date;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring DateFormat::format(jstring arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"format",
			"(Ljava/lang/CharSequence;J)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DateFormat::getBestDateTimePattern(java::util::Locale arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getBestDateTimePattern",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	java::text::DateFormat DateFormat::getDateFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	jcharArray DateFormat::getDateFormatOrder(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getDateFormatOrder",
			"(Landroid/content/Context;)[C",
			arg0.object()
		).object<jcharArray>();
	}
	java::text::DateFormat DateFormat::getLongDateFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getLongDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	java::text::DateFormat DateFormat::getMediumDateFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getMediumDateFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	java::text::DateFormat DateFormat::getTimeFormat(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.text.format.DateFormat",
			"getTimeFormat",
			"(Landroid/content/Context;)Ljava/text/DateFormat;",
			arg0.object()
		);
	}
	jboolean DateFormat::is24HourFormat(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.format.DateFormat",
			"is24HourFormat",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
} // namespace android::text::format

