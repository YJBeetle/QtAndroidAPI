#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../util/Locale.def.hpp"
#include "./DecimalStyle.def.hpp"

namespace java::time::format
{
	// Fields
	inline java::time::format::DecimalStyle DecimalStyle::STANDARD()
	{
		return getStaticObjectField(
			"java.time.format.DecimalStyle",
			"STANDARD",
			"Ljava/time/format/DecimalStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject DecimalStyle::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"getAvailableLocales",
			"()Ljava/util/Set;"
		);
	}
	inline java::time::format::DecimalStyle DecimalStyle::of(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"of",
			"(Ljava/util/Locale;)Ljava/time/format/DecimalStyle;",
			arg0.object()
		);
	}
	inline java::time::format::DecimalStyle DecimalStyle::ofDefaultLocale()
	{
		return callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"ofDefaultLocale",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	inline jboolean DecimalStyle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jchar DecimalStyle::getDecimalSeparator() const
	{
		return callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	inline jchar DecimalStyle::getNegativeSign() const
	{
		return callMethod<jchar>(
			"getNegativeSign",
			"()C"
		);
	}
	inline jchar DecimalStyle::getPositiveSign() const
	{
		return callMethod<jchar>(
			"getPositiveSign",
			"()C"
		);
	}
	inline jchar DecimalStyle::getZeroDigit() const
	{
		return callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	inline jint DecimalStyle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DecimalStyle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::format::DecimalStyle DecimalStyle::withDecimalSeparator(jchar arg0) const
	{
		return callObjectMethod(
			"withDecimalSeparator",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	inline java::time::format::DecimalStyle DecimalStyle::withNegativeSign(jchar arg0) const
	{
		return callObjectMethod(
			"withNegativeSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	inline java::time::format::DecimalStyle DecimalStyle::withPositiveSign(jchar arg0) const
	{
		return callObjectMethod(
			"withPositiveSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	inline java::time::format::DecimalStyle DecimalStyle::withZeroDigit(jchar arg0) const
	{
		return callObjectMethod(
			"withZeroDigit",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
} // namespace java::time::format

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::format;
#endif
