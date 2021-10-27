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
	
	TimeZoneFormat::TimeZoneFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TimeZoneFormat::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	jstring TimeZoneFormat::format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;J)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring TimeZoneFormat::format(android::icu::text::TimeZoneFormat_Style arg0, android::icu::util::TimeZone arg1, jlong arg2, android::icu::util::Output arg3)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;JLandroid/icu/util/Output;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject TimeZoneFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring TimeZoneFormat::formatOffsetISO8601Basic(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
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
		return __thiz.callObjectMethod(
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
		return __thiz.callObjectMethod(
			"formatOffsetLocalizedGMT",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TimeZoneFormat::formatOffsetShortLocalizedGMT(jint arg0)
	{
		return __thiz.callObjectMethod(
			"formatOffsetShortLocalizedGMT",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject TimeZoneFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	QAndroidJniObject TimeZoneFormat::getDefaultParseOptions()
	{
		return __thiz.callObjectMethod(
			"getDefaultParseOptions",
			"()Ljava/util/EnumSet;"
		);
	}
	jstring TimeZoneFormat::getGMTOffsetDigits()
	{
		return __thiz.callObjectMethod(
			"getGMTOffsetDigits",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TimeZoneFormat::getGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0)
	{
		return __thiz.callObjectMethod(
			"getGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring TimeZoneFormat::getGMTPattern()
	{
		return __thiz.callObjectMethod(
			"getGMTPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TimeZoneFormat::getGMTZeroFormat()
	{
		return __thiz.callObjectMethod(
			"getGMTZeroFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TimeZoneFormat::getTimeZoneNames()
	{
		return __thiz.callObjectMethod(
			"getTimeZoneNames",
			"()Landroid/icu/text/TimeZoneNames;"
		);
	}
	jboolean TimeZoneFormat::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/util/TimeZone;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/TimeZone;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/TimeZone;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, android::icu::util::Output arg3)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, const QString &arg1, java::text::ParsePosition arg2, android::icu::util::Output arg3)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, java::text::ParsePosition arg2, java::util::EnumSet arg3, android::icu::util::Output arg4)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Ljava/util/EnumSet;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(android::icu::text::TimeZoneFormat_Style arg0, const QString &arg1, java::text::ParsePosition arg2, java::util::EnumSet arg3, android::icu::util::Output arg4)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Ljava/util/EnumSet;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jobject TimeZoneFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject TimeZoneFormat::parseObject(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jint TimeZoneFormat::parseOffsetISO8601(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetISO8601",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TimeZoneFormat::parseOffsetISO8601(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetISO8601",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint TimeZoneFormat::parseOffsetLocalizedGMT(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TimeZoneFormat::parseOffsetLocalizedGMT(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint TimeZoneFormat::parseOffsetShortLocalizedGMT(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetShortLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TimeZoneFormat::parseOffsetShortLocalizedGMT(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetShortLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::setDefaultParseOptions(java::util::EnumSet arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaultParseOptions",
			"(Ljava/util/EnumSet;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTOffsetDigits(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTOffsetDigits",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTOffsetDigits(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTOffsetDigits",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTOffsetPattern(android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTPattern(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTPattern",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTPattern(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTPattern",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTZeroFormat(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTZeroFormat",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat::setGMTZeroFormat(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTZeroFormat",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TimeZoneFormat::setTimeZoneNames(android::icu::text::TimeZoneNames arg0)
	{
		return __thiz.callObjectMethod(
			"setTimeZoneNames",
			"(Landroid/icu/text/TimeZoneNames;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::text

