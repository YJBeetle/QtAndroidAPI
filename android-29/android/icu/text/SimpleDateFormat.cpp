#include "./DateFormat_Field.hpp"
#include "./DateFormatSymbols.hpp"
#include "./DisplayContext.hpp"
#include "./NumberFormat.hpp"
#include "./TimeZoneFormat.hpp"
#include "../util/Calendar.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./SimpleDateFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	SimpleDateFormat::SimpleDateFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SimpleDateFormat::SimpleDateFormat()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"()V"
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SimpleDateFormat::SimpleDateFormat(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring &arg0, android::icu::text::DateFormatSymbols &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(const QString &arg0, android::icu::text::DateFormatSymbols &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring &arg0, android::icu::util::ULocale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(const QString &arg0, android::icu::util::ULocale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring &arg0, java::util::Locale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(const QString &arg0, java::util::Locale &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring &arg0, jstring &arg1, android::icu::util::ULocale &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(const QString &arg0, const QString &arg1, android::icu::util::ULocale &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void SimpleDateFormat::applyLocalizedPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyLocalizedPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SimpleDateFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject SimpleDateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean SimpleDateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleDateFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::get2DigitYearStart()
	{
		return __thiz.callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject SimpleDateFormat::getDateFormatSymbols()
	{
		return __thiz.callObjectMethod(
			"getDateFormatSymbols",
			"()Landroid/icu/text/DateFormatSymbols;"
		);
	}
	QAndroidJniObject SimpleDateFormat::getNumberFormat(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"getNumberFormat",
			"(C)Landroid/icu/text/NumberFormat;",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::getTimeZoneFormat()
	{
		return __thiz.callObjectMethod(
			"getTimeZoneFormat",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	jint SimpleDateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SimpleDateFormat::parse(jstring arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SimpleDateFormat::parse(const QString &arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2)
	{
		__thiz.callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SimpleDateFormat::set2DigitYearStart(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setContext(android::icu::text::DisplayContext arg0)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setDateFormatSymbols(android::icu::text::DateFormatSymbols arg0)
	{
		__thiz.callMethod<void>(
			"setDateFormatSymbols",
			"(Landroid/icu/text/DateFormatSymbols;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setNumberFormat(android::icu::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setNumberFormat(jstring arg0, android::icu::text::NumberFormat arg1)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Ljava/lang/String;Landroid/icu/text/NumberFormat;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::setNumberFormat(const QString &arg0, android::icu::text::NumberFormat arg1)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Ljava/lang/String;Landroid/icu/text/NumberFormat;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::setTimeZoneFormat(android::icu::text::TimeZoneFormat arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZoneFormat",
			"(Landroid/icu/text/TimeZoneFormat;)V",
			arg0.__jniObject().object()
		);
	}
	jstring SimpleDateFormat::toLocalizedPattern()
	{
		return __thiz.callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SimpleDateFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

