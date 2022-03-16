#pragma once

#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "./DateFormatSymbols.def.hpp"
#include "./FieldPosition.def.hpp"
#include "./NumberFormat.def.hpp"
#include "./ParsePosition.def.hpp"
#include "../util/Date.def.hpp"
#include "../util/Locale.def.hpp"
#include "./SimpleDateFormat.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline SimpleDateFormat::SimpleDateFormat()
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"()V"
		) {}
	inline SimpleDateFormat::SimpleDateFormat(JString arg0)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SimpleDateFormat::SimpleDateFormat(JString arg0, java::text::DateFormatSymbols arg1)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline SimpleDateFormat::SimpleDateFormat(JString arg0, java::util::Locale arg1)
		: java::text::DateFormat(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline void SimpleDateFormat::applyLocalizedPattern(JString arg0) const
	{
		callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SimpleDateFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject SimpleDateFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean SimpleDateFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::lang::StringBuffer SimpleDateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject SimpleDateFormat::formatToCharacterIterator(JObject arg0) const
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	inline java::util::Date SimpleDateFormat::get2DigitYearStart() const
	{
		return callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;"
		);
	}
	inline java::text::DateFormatSymbols SimpleDateFormat::getDateFormatSymbols() const
	{
		return callObjectMethod(
			"getDateFormatSymbols",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	inline jint SimpleDateFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::util::Date SimpleDateFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void SimpleDateFormat::set2DigitYearStart(java::util::Date arg0) const
	{
		callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	inline void SimpleDateFormat::setDateFormatSymbols(java::text::DateFormatSymbols arg0) const
	{
		callMethod<void>(
			"setDateFormatSymbols",
			"(Ljava/text/DateFormatSymbols;)V",
			arg0.object()
		);
	}
	inline JString SimpleDateFormat::toLocalizedPattern() const
	{
		return callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		);
	}
	inline JString SimpleDateFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers
#include "./Format.hpp"
#include "./DateFormat.hpp"

