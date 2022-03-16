#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// Constructors
	SimpleDateFormat::SimpleDateFormat()
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"()V"
		) {}
	SimpleDateFormat::SimpleDateFormat(JString arg0)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SimpleDateFormat::SimpleDateFormat(JString arg0, java::text::DateFormatSymbols arg1)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	SimpleDateFormat::SimpleDateFormat(JString arg0, java::util::Locale arg1)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	void SimpleDateFormat::applyLocalizedPattern(JString arg0) const
	{
		callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SimpleDateFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject SimpleDateFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean SimpleDateFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::lang::StringBuffer SimpleDateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject SimpleDateFormat::formatToCharacterIterator(JObject arg0) const
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	java::util::Date SimpleDateFormat::get2DigitYearStart() const
	{
		return callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;"
		);
	}
	java::text::DateFormatSymbols SimpleDateFormat::getDateFormatSymbols() const
	{
		return callObjectMethod(
			"getDateFormatSymbols",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	jint SimpleDateFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::util::Date SimpleDateFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void SimpleDateFormat::set2DigitYearStart(java::util::Date arg0) const
	{
		callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void SimpleDateFormat::setDateFormatSymbols(java::text::DateFormatSymbols arg0) const
	{
		callMethod<void>(
			"setDateFormatSymbols",
			"(Ljava/text/DateFormatSymbols;)V",
			arg0.object()
		);
	}
	JString SimpleDateFormat::toLocalizedPattern() const
	{
		return callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		);
	}
	JString SimpleDateFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

