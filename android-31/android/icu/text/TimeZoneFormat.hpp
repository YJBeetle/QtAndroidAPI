#pragma once

#include "./TimeZoneFormat_GMTOffsetPatternType.def.hpp"
#include "./TimeZoneFormat_Style.def.hpp"
#include "./TimeZoneNames.def.hpp"
#include "../util/Output.def.hpp"
#include "../util/TimeZone.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "../../../java/text/FieldPosition.def.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "../../../java/util/EnumSet.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TimeZoneFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	inline JString TimeZoneFormat::format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;J)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline JString TimeZoneFormat::format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2, android::icu::util::Output arg3) const
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;JLandroid/icu/util/Output;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline java::lang::StringBuffer TimeZoneFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString TimeZoneFormat::formatOffsetISO8601Basic(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"formatOffsetISO8601Basic",
			"(IZZZ)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline JString TimeZoneFormat::formatOffsetISO8601Extended(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"formatOffsetISO8601Extended",
			"(IZZZ)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline JString TimeZoneFormat::formatOffsetLocalizedGMT(jint arg0) const
	{
		return callObjectMethod(
			"formatOffsetLocalizedGMT",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TimeZoneFormat::formatOffsetShortLocalizedGMT(jint arg0) const
	{
		return callObjectMethod(
			"formatOffsetShortLocalizedGMT",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject TimeZoneFormat::formatToCharacterIterator(JObject arg0) const
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	inline java::util::EnumSet TimeZoneFormat::getDefaultParseOptions() const
	{
		return callObjectMethod(
			"getDefaultParseOptions",
			"()Ljava/util/EnumSet;"
		);
	}
	inline JString TimeZoneFormat::getGMTOffsetDigits() const
	{
		return callObjectMethod(
			"getGMTOffsetDigits",
			"()Ljava/lang/String;"
		);
	}
	inline JString TimeZoneFormat::getGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0) const
	{
		return callObjectMethod(
			"getGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString TimeZoneFormat::getGMTPattern() const
	{
		return callObjectMethod(
			"getGMTPattern",
			"()Ljava/lang/String;"
		);
	}
	inline JString TimeZoneFormat::getGMTZeroFormat() const
	{
		return callObjectMethod(
			"getGMTZeroFormat",
			"()Ljava/lang/String;"
		);
	}
	inline android::icu::text::TimeZoneNames TimeZoneFormat::getTimeZoneNames() const
	{
		return callObjectMethod(
			"getTimeZoneNames",
			"()Landroid/icu/text/TimeZoneNames;"
		);
	}
	inline jboolean TimeZoneFormat::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	inline android::icu::util::TimeZone TimeZoneFormat::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::TimeZone TimeZoneFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/TimeZone;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::util::TimeZone TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, JString arg1, java::text::ParsePosition arg2, android::icu::util::Output arg3) const
	{
		return callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::icu::util::TimeZone TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, JString arg1, java::text::ParsePosition arg2, java::util::EnumSet arg3, android::icu::util::Output arg4) const
	{
		return callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Ljava/util/EnumSet;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline JObject TimeZoneFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint TimeZoneFormat::parseOffsetISO8601(JString arg0, java::text::ParsePosition arg1) const
	{
		return callMethod<jint>(
			"parseOffsetISO8601",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint TimeZoneFormat::parseOffsetLocalizedGMT(JString arg0, java::text::ParsePosition arg1) const
	{
		return callMethod<jint>(
			"parseOffsetLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint TimeZoneFormat::parseOffsetShortLocalizedGMT(JString arg0, java::text::ParsePosition arg1) const
	{
		return callMethod<jint>(
			"parseOffsetShortLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::setDefaultParseOptions(java::util::EnumSet arg0) const
	{
		return callObjectMethod(
			"setDefaultParseOptions",
			"(Ljava/util/EnumSet;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTOffsetDigits(JString arg0) const
	{
		return callObjectMethod(
			"setGMTOffsetDigits",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, JString arg1) const
	{
		return callObjectMethod(
			"setGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTPattern(JString arg0) const
	{
		return callObjectMethod(
			"setGMTPattern",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTZeroFormat(JString arg0) const
	{
		return callObjectMethod(
			"setGMTZeroFormat",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::TimeZoneFormat TimeZoneFormat::setTimeZoneNames(android::icu::text::TimeZoneNames arg0) const
	{
		return callObjectMethod(
			"setTimeZoneNames",
			"(Landroid/icu/text/TimeZoneNames;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
