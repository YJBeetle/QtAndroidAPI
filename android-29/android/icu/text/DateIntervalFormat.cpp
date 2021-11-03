#include "./DateFormat.hpp"
#include "./DateIntervalInfo.hpp"
#include "../util/Calendar.hpp"
#include "../util/DateInterval.hpp"
#include "../util/TimeZone.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateIntervalFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	DateIntervalFormat::DateIntervalFormat(QAndroidJniObject obj) : android::icu::text::UFormat(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>()
		);
	}
	android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, android::icu::text::DateIntervalInfo arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, android::icu::util::ULocale arg1, android::icu::text::DateIntervalInfo arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, java::util::Locale arg1, android::icu::text::DateIntervalInfo arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject DateIntervalFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	java::lang::StringBuffer DateIntervalFormat::format(android::icu::util::DateInterval arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/DateInterval;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DateIntervalFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer DateIntervalFormat::format(android::icu::util::Calendar arg0, android::icu::util::Calendar arg1, java::lang::StringBuffer arg2, java::text::FieldPosition arg3) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::icu::text::DateFormat DateIntervalFormat::getDateFormat() const
	{
		return callObjectMethod(
			"getDateFormat",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	android::icu::text::DateIntervalInfo DateIntervalFormat::getDateIntervalInfo() const
	{
		return callObjectMethod(
			"getDateIntervalInfo",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	android::icu::util::TimeZone DateIntervalFormat::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	JObject DateIntervalFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void DateIntervalFormat::setDateIntervalInfo(android::icu::text::DateIntervalInfo arg0) const
	{
		callMethod<void>(
			"setDateIntervalInfo",
			"(Landroid/icu/text/DateIntervalInfo;)V",
			arg0.object()
		);
	}
	void DateIntervalFormat::setTimeZone(android::icu::util::TimeZone arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

