#include "./TimeZoneFormat_GMTOffsetPatternType.hpp"
#include "./TimeZoneFormat_Style.hpp"
#include "./TimeZoneNames.hpp"
#include "../util/Output.hpp"
#include "../util/TimeZone.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/EnumSet.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TimeZoneFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	TimeZoneFormat::TimeZoneFormat(QJniObject obj) : android::icu::text::UFormat(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::TimeZoneFormat TimeZoneFormat::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	jstring TimeZoneFormat::format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;J)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2
		).object<jstring>();
	}
	jstring TimeZoneFormat::format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2, android::icu::util::Output arg3)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;JLandroid/icu/util/Output;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		).object<jstring>();
	}
	java::lang::StringBuffer TimeZoneFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jstring TimeZoneFormat::formatOffsetISO8601Basic(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3)
	{
		return callObjectMethod(
			"formatOffsetISO8601Basic",
			"(IZZZ)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring TimeZoneFormat::formatOffsetISO8601Extended(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3)
	{
		return callObjectMethod(
			"formatOffsetISO8601Extended",
			"(IZZZ)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring TimeZoneFormat::formatOffsetLocalizedGMT(jint arg0)
	{
		return callObjectMethod(
			"formatOffsetLocalizedGMT",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZoneFormat::formatOffsetShortLocalizedGMT(jint arg0)
	{
		return callObjectMethod(
			"formatOffsetShortLocalizedGMT",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	JObject TimeZoneFormat::formatToCharacterIterator(jobject arg0)
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	java::util::EnumSet TimeZoneFormat::getDefaultParseOptions()
	{
		return callObjectMethod(
			"getDefaultParseOptions",
			"()Ljava/util/EnumSet;"
		);
	}
	jstring TimeZoneFormat::getGMTOffsetDigits()
	{
		return callObjectMethod(
			"getGMTOffsetDigits",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TimeZoneFormat::getGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0)
	{
		return callObjectMethod(
			"getGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring TimeZoneFormat::getGMTPattern()
	{
		return callObjectMethod(
			"getGMTPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TimeZoneFormat::getGMTZeroFormat()
	{
		return callObjectMethod(
			"getGMTZeroFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::icu::text::TimeZoneNames TimeZoneFormat::getTimeZoneNames()
	{
		return callObjectMethod(
			"getTimeZoneNames",
			"()Landroid/icu/text/TimeZoneNames;"
		);
	}
	jboolean TimeZoneFormat::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	android::icu::util::TimeZone TimeZoneFormat::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0
		);
	}
	android::icu::util::TimeZone TimeZoneFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/TimeZone;",
			arg0,
			arg1.object()
		);
	}
	android::icu::util::TimeZone TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, android::icu::util::Output arg3)
	{
		return callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	android::icu::util::TimeZone TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, java::util::EnumSet arg3, android::icu::util::Output arg4)
	{
		return callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Ljava/util/EnumSet;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	jobject TimeZoneFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jint TimeZoneFormat::parseOffsetISO8601(jstring arg0, java::text::ParsePosition arg1)
	{
		return callMethod<jint>(
			"parseOffsetISO8601",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.object()
		);
	}
	jint TimeZoneFormat::parseOffsetLocalizedGMT(jstring arg0, java::text::ParsePosition arg1)
	{
		return callMethod<jint>(
			"parseOffsetLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.object()
		);
	}
	jint TimeZoneFormat::parseOffsetShortLocalizedGMT(jstring arg0, java::text::ParsePosition arg1)
	{
		return callMethod<jint>(
			"parseOffsetShortLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.object()
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::setDefaultParseOptions(java::util::EnumSet arg0)
	{
		return callObjectMethod(
			"setDefaultParseOptions",
			"(Ljava/util/EnumSet;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTOffsetDigits(jstring arg0)
	{
		return callObjectMethod(
			"setGMTOffsetDigits",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, jstring arg1)
	{
		return callObjectMethod(
			"setGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object(),
			arg1
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTPattern(jstring arg0)
	{
		return callObjectMethod(
			"setGMTPattern",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::setGMTZeroFormat(jstring arg0)
	{
		return callObjectMethod(
			"setGMTZeroFormat",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	android::icu::text::TimeZoneFormat TimeZoneFormat::setTimeZoneNames(android::icu::text::TimeZoneNames arg0)
	{
		return callObjectMethod(
			"setTimeZoneNames",
			"(Landroid/icu/text/TimeZoneNames;)Landroid/icu/text/TimeZoneFormat;",
			arg0.object()
		);
	}
} // namespace android::icu::text

