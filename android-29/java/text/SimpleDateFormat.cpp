#include "../io/ObjectInputStream.hpp"
#include "../lang/StringBuffer.hpp"
#include "../lang/StringBuilder.hpp"
#include "./DateFormatSymbols.hpp"
#include "./FieldPosition.hpp"
#include "./NumberFormat.hpp"
#include "./ParsePosition.hpp"
#include "../util/Date.hpp"
#include "../util/Locale.hpp"
#include "./SimpleDateFormat.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	SimpleDateFormat::SimpleDateFormat(QAndroidJniObject obj) : java::text::DateFormat(obj) {}
	
	// Constructors
	SimpleDateFormat::SimpleDateFormat()
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"()V"
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, java::text::DateFormatSymbols arg1)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V",
			arg0,
			arg1.object()
		) {}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, java::util::Locale arg1)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.object()
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
	java::lang::StringBuffer SimpleDateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass SimpleDateFormat::formatToCharacterIterator(jobject arg0)
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
	java::text::DateFormatSymbols SimpleDateFormat::getDateFormatSymbols()
	{
		return callObjectMethod(
			"getDateFormatSymbols",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	jint SimpleDateFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::util::Date SimpleDateFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.object()
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
	void SimpleDateFormat::setDateFormatSymbols(java::text::DateFormatSymbols arg0)
	{
		callMethod<void>(
			"setDateFormatSymbols",
			"(Ljava/text/DateFormatSymbols;)V",
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
} // namespace java::text

