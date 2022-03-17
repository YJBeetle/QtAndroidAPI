#pragma once

#include "./DateFormat.def.hpp"
#include "./DateIntervalFormat_FormattedDateInterval.def.hpp"
#include "./DateIntervalInfo.def.hpp"
#include "../util/Calendar.def.hpp"
#include "../util/DateInterval.def.hpp"
#include "../util/TimeZone.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "../../../java/text/FieldPosition.def.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DateIntervalFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, android::icu::text::DateIntervalInfo arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateIntervalFormat;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, android::icu::util::ULocale arg1, android::icu::text::DateIntervalInfo arg2)
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
	inline android::icu::text::DateIntervalFormat DateIntervalFormat::getInstance(JString arg0, java::util::Locale arg1, android::icu::text::DateIntervalInfo arg2)
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
	inline JObject DateIntervalFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline java::lang::StringBuffer DateIntervalFormat::format(android::icu::util::DateInterval arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/DateInterval;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer DateIntervalFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer DateIntervalFormat::format(android::icu::util::Calendar arg0, android::icu::util::Calendar arg1, java::lang::StringBuffer arg2, java::text::FieldPosition arg3) const
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
	inline android::icu::text::DateIntervalFormat_FormattedDateInterval DateIntervalFormat::formatToValue(android::icu::util::DateInterval arg0) const
	{
		return callObjectMethod(
			"formatToValue",
			"(Landroid/icu/util/DateInterval;)Landroid/icu/text/DateIntervalFormat$FormattedDateInterval;",
			arg0.object()
		);
	}
	inline android::icu::text::DateIntervalFormat_FormattedDateInterval DateIntervalFormat::formatToValue(android::icu::util::Calendar arg0, android::icu::util::Calendar arg1) const
	{
		return callObjectMethod(
			"formatToValue",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;)Landroid/icu/text/DateIntervalFormat$FormattedDateInterval;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::icu::text::DateFormat DateIntervalFormat::getDateFormat() const
	{
		return callObjectMethod(
			"getDateFormat",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	inline android::icu::text::DateIntervalInfo DateIntervalFormat::getDateIntervalInfo() const
	{
		return callObjectMethod(
			"getDateIntervalInfo",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	inline android::icu::util::TimeZone DateIntervalFormat::getTimeZone() const
	{
		return callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	inline JObject DateIntervalFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void DateIntervalFormat::setDateIntervalInfo(android::icu::text::DateIntervalInfo arg0) const
	{
		callMethod<void>(
			"setDateIntervalInfo",
			"(Landroid/icu/text/DateIntervalInfo;)V",
			arg0.object()
		);
	}
	inline void DateIntervalFormat::setTimeZone(android::icu::util::TimeZone arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

