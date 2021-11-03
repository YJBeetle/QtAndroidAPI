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
	
	// QJniObject forward
	SimpleDateFormat::SimpleDateFormat(QJniObject obj) : android::icu::text::DateFormat(obj) {}
	
	// Constructors
	SimpleDateFormat::SimpleDateFormat()
		: android::icu::text::DateFormat(
			"android.icu.text.SimpleDateFormat",
			"()V"
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0)
		: android::icu::text::DateFormat(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, android::icu::text::DateFormatSymbols arg1)
		: android::icu::text::DateFormat(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;)V",
			arg0,
			arg1.object()
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, android::icu::util::ULocale arg1)
		: android::icu::text::DateFormat(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.object()
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, java::util::Locale arg1)
		: android::icu::text::DateFormat(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.object()
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, jstring arg1, android::icu::util::ULocale arg2)
		: android::icu::text::DateFormat(
			"android.icu.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	void SimpleDateFormat::applyLocalizedPattern(jstring arg0)
	{
		callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyPattern(jstring arg0)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jobject SimpleDateFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean SimpleDateFormat::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::lang::StringBuffer SimpleDateFormat::format(android::icu::util::Calendar arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject SimpleDateFormat::formatToCharacterIterator(jobject arg0)
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	java::util::Date SimpleDateFormat::get2DigitYearStart()
	{
		return callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;"
		);
	}
	android::icu::text::DateFormatSymbols SimpleDateFormat::getDateFormatSymbols()
	{
		return callObjectMethod(
			"getDateFormatSymbols",
			"()Landroid/icu/text/DateFormatSymbols;"
		);
	}
	android::icu::text::NumberFormat SimpleDateFormat::getNumberFormat(jchar arg0)
	{
		return callObjectMethod(
			"getNumberFormat",
			"(C)Landroid/icu/text/NumberFormat;",
			arg0
		);
	}
	android::icu::text::TimeZoneFormat SimpleDateFormat::getTimeZoneFormat()
	{
		return callObjectMethod(
			"getTimeZoneFormat",
			"()Landroid/icu/text/TimeZoneFormat;"
		);
	}
	jint SimpleDateFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SimpleDateFormat::parse(jstring arg0, android::icu::util::Calendar arg1, java::text::ParsePosition arg2)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void SimpleDateFormat::set2DigitYearStart(java::util::Date arg0)
	{
		callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void SimpleDateFormat::setContext(android::icu::text::DisplayContext arg0)
	{
		callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.object()
		);
	}
	void SimpleDateFormat::setDateFormatSymbols(android::icu::text::DateFormatSymbols arg0)
	{
		callMethod<void>(
			"setDateFormatSymbols",
			"(Landroid/icu/text/DateFormatSymbols;)V",
			arg0.object()
		);
	}
	void SimpleDateFormat::setNumberFormat(android::icu::text::NumberFormat arg0)
	{
		callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.object()
		);
	}
	void SimpleDateFormat::setNumberFormat(jstring arg0, android::icu::text::NumberFormat arg1)
	{
		callMethod<void>(
			"setNumberFormat",
			"(Ljava/lang/String;Landroid/icu/text/NumberFormat;)V",
			arg0,
			arg1.object()
		);
	}
	void SimpleDateFormat::setTimeZoneFormat(android::icu::text::TimeZoneFormat arg0)
	{
		callMethod<void>(
			"setTimeZoneFormat",
			"(Landroid/icu/text/TimeZoneFormat;)V",
			arg0.object()
		);
	}
	jstring SimpleDateFormat::toLocalizedPattern()
	{
		return callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SimpleDateFormat::toPattern()
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

