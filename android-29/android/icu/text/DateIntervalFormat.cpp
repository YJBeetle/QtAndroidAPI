#include "./DateFormat.hpp"
#include "./DateIntervalInfo.hpp"
#include "../util/Calendar.hpp"
#include "../util/DateInterval.hpp"
#include "../util/TimeZone.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateIntervalFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	DateIntervalFormat::DateIntervalFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat;",
			arg0
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, android::icu::text::DateIntervalInfo arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, android::icu::text::DateIntervalInfo arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, android::icu::util::ULocale arg1, android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, android::icu::util::ULocale arg1, android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(jstring arg0, java::util::Locale arg1, android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getInstance(const QString &arg0, java::util::Locale arg1, android::icu::text::DateIntervalInfo arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateIntervalFormat",
			"getInstance",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject DateIntervalFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DateIntervalFormat::format(android::icu::util::DateInterval arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/DateInterval;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::format(android::icu::util::Calendar arg0, android::icu::util::Calendar arg1, java::lang::StringBuffer arg2, java::text::FieldPosition arg3)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DateIntervalFormat::getDateFormat()
	{
		return __thiz.callObjectMethod(
			"getDateFormat",
			"()Landroid/icu/text/DateFormat;"
		);
	}
	QAndroidJniObject DateIntervalFormat::getDateIntervalInfo()
	{
		return __thiz.callObjectMethod(
			"getDateIntervalInfo",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	QAndroidJniObject DateIntervalFormat::getTimeZone()
	{
		return __thiz.callObjectMethod(
			"getTimeZone",
			"()Landroid/icu/util/TimeZone;"
		);
	}
	jobject DateIntervalFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject DateIntervalFormat::parseObject(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void DateIntervalFormat::setDateIntervalInfo(android::icu::text::DateIntervalInfo arg0)
	{
		__thiz.callMethod<void>(
			"setDateIntervalInfo",
			"(Landroid/icu/text/DateIntervalInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void DateIntervalFormat::setTimeZone(android::icu::util::TimeZone arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::text

