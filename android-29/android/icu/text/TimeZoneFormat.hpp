#pragma once

#ifndef ANDROID_ICU_TEXT_TIMEZONEFORMAT
#define ANDROID_ICU_TEXT_TIMEZONEFORMAT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat_Style;
}
namespace __jni_impl::android::icu::util
{
	class TimeZone;
}
namespace __jni_impl::android::icu::util
{
	class Output;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::util
{
	class EnumSet;
}
namespace __jni_impl::android::icu::text
{
	class TimeZoneNames;
}
namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat_GMTOffsetPatternType;
}

namespace __jni_impl::android::icu::text
{
	class TimeZoneFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring format(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, __jni_impl::android::icu::util::TimeZone arg1, jlong arg2);
		jstring format(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, __jni_impl::android::icu::util::TimeZone arg1, jlong arg2, __jni_impl::android::icu::util::Output arg3);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		jboolean isFrozen();
		QAndroidJniObject freeze();
		QAndroidJniObject parse(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, __jni_impl::java::text::ParsePosition arg2, __jni_impl::android::icu::util::Output arg3);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, __jni_impl::java::text::ParsePosition arg2, __jni_impl::java::util::EnumSet arg3, __jni_impl::android::icu::util::Output arg4);
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject getTimeZoneNames();
		QAndroidJniObject setTimeZoneNames(__jni_impl::android::icu::text::TimeZoneNames arg0);
		jstring getGMTPattern();
		QAndroidJniObject setGMTPattern(jstring arg0);
		jstring getGMTOffsetPattern(__jni_impl::android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0);
		QAndroidJniObject setGMTOffsetPattern(__jni_impl::android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, jstring arg1);
		jstring getGMTOffsetDigits();
		QAndroidJniObject setGMTOffsetDigits(jstring arg0);
		jstring getGMTZeroFormat();
		QAndroidJniObject setGMTZeroFormat(jstring arg0);
		QAndroidJniObject setDefaultParseOptions(__jni_impl::java::util::EnumSet arg0);
		QAndroidJniObject getDefaultParseOptions();
		jstring formatOffsetISO8601Basic(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		jstring formatOffsetISO8601Extended(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		jstring formatOffsetLocalizedGMT(jint arg0);
		jstring formatOffsetShortLocalizedGMT(jint arg0);
		jint parseOffsetISO8601(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jint parseOffsetLocalizedGMT(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jint parseOffsetShortLocalizedGMT(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject cloneAsThawed();
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "TimeZoneFormat_Style.hpp"
#include "../util/TimeZone.hpp"
#include "../util/Output.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/EnumSet.hpp"
#include "TimeZoneNames.hpp"
#include "TimeZoneFormat_GMTOffsetPatternType.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void TimeZoneFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.TimeZoneFormat",
			"(V)V");
	}
	
	// Methods
	jstring TimeZoneFormat::format(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, __jni_impl::android::icu::util::TimeZone arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;J)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring TimeZoneFormat::format(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, __jni_impl::android::icu::util::TimeZone arg1, jlong arg2, __jni_impl::android::icu::util::Output arg3)
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
	QAndroidJniObject TimeZoneFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
	jboolean TimeZoneFormat::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	QAndroidJniObject TimeZoneFormat::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	QAndroidJniObject TimeZoneFormat::parse(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, __jni_impl::java::text::ParsePosition arg2, __jni_impl::android::icu::util::Output arg3)
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
	QAndroidJniObject TimeZoneFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/TimeZone;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject TimeZoneFormat::parse(__jni_impl::android::icu::text::TimeZoneFormat_Style arg0, jstring arg1, __jni_impl::java::text::ParsePosition arg2, __jni_impl::java::util::EnumSet arg3, __jni_impl::android::icu::util::Output arg4)
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
	jobject TimeZoneFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject TimeZoneFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat::getTimeZoneNames()
	{
		return __thiz.callObjectMethod(
			"getTimeZoneNames",
			"()Landroid/icu/text/TimeZoneNames;"
		);
	}
	QAndroidJniObject TimeZoneFormat::setTimeZoneNames(__jni_impl::android::icu::text::TimeZoneNames arg0)
	{
		return __thiz.callObjectMethod(
			"setTimeZoneNames",
			"(Landroid/icu/text/TimeZoneNames;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
	jstring TimeZoneFormat::getGMTPattern()
	{
		return __thiz.callObjectMethod(
			"getGMTPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TimeZoneFormat::setGMTPattern(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTPattern",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	jstring TimeZoneFormat::getGMTOffsetPattern(__jni_impl::android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0)
	{
		return __thiz.callObjectMethod(
			"getGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject TimeZoneFormat::setGMTOffsetPattern(__jni_impl::android::icu::text::TimeZoneFormat_GMTOffsetPatternType arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setGMTOffsetPattern",
			"(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring TimeZoneFormat::getGMTOffsetDigits()
	{
		return __thiz.callObjectMethod(
			"getGMTOffsetDigits",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TimeZoneFormat::setGMTOffsetDigits(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTOffsetDigits",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	jstring TimeZoneFormat::getGMTZeroFormat()
	{
		return __thiz.callObjectMethod(
			"getGMTZeroFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TimeZoneFormat::setGMTZeroFormat(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGMTZeroFormat",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat::setDefaultParseOptions(__jni_impl::java::util::EnumSet arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaultParseOptions",
			"(Ljava/util/EnumSet;)Landroid/icu/text/TimeZoneFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::getDefaultParseOptions()
	{
		return __thiz.callObjectMethod(
			"getDefaultParseOptions",
			"()Ljava/util/EnumSet;"
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
	jint TimeZoneFormat::parseOffsetISO8601(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetISO8601",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TimeZoneFormat::parseOffsetLocalizedGMT(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TimeZoneFormat::parseOffsetShortLocalizedGMT(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callMethod<jint>(
			"parseOffsetShortLocalizedGMT",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TimeZoneFormat::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class TimeZoneFormat : public __jni_impl::android::icu::text::TimeZoneFormat
	{
	public:
		TimeZoneFormat(QAndroidJniObject obj) { __thiz = obj; }
		TimeZoneFormat()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TIMEZONEFORMAT

