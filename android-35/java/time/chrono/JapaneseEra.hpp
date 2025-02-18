#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../LocalDate.def.hpp"
#include "../format/TextStyle.def.hpp"
#include "../temporal/ValueRange.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./JapaneseEra.def.hpp"

namespace java::time::chrono
{
	// Fields
	inline java::time::chrono::JapaneseEra JapaneseEra::HEISEI()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"HEISEI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	inline java::time::chrono::JapaneseEra JapaneseEra::MEIJI()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"MEIJI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	inline java::time::chrono::JapaneseEra JapaneseEra::REIWA()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"REIWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	inline java::time::chrono::JapaneseEra JapaneseEra::SHOWA()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"SHOWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	inline java::time::chrono::JapaneseEra JapaneseEra::TAISHO()
	{
		return getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"TAISHO",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::chrono::JapaneseEra JapaneseEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"of",
			"(I)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	inline java::time::chrono::JapaneseEra JapaneseEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/JapaneseEra;",
			arg0.object<jstring>()
		);
	}
	inline JArray JapaneseEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"values",
			"()[Ljava/time/chrono/JapaneseEra;"
		);
	}
	inline JString JapaneseEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint JapaneseEra::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	inline java::time::temporal::ValueRange JapaneseEra::range(JObject arg0) const
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline JString JapaneseEra::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::chrono

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::chrono;
#endif
