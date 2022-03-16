#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Locale_LanguageRange.def.hpp"

namespace java::util
{
	// Fields
	inline jdouble Locale_LanguageRange::MAX_WEIGHT()
	{
		return getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MAX_WEIGHT"
		);
	}
	inline jdouble Locale_LanguageRange::MIN_WEIGHT()
	{
		return getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MIN_WEIGHT"
		);
	}
	
	// Constructors
	inline Locale_LanguageRange::Locale_LanguageRange(JString arg0)
		: JObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Locale_LanguageRange::Locale_LanguageRange(JString arg0, jdouble arg1)
		: JObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline JObject Locale_LanguageRange::mapEquivalents(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"mapEquivalents",
			"(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Locale_LanguageRange::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline JObject Locale_LanguageRange::parse(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean Locale_LanguageRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Locale_LanguageRange::getRange() const
	{
		return callObjectMethod(
			"getRange",
			"()Ljava/lang/String;"
		);
	}
	inline jdouble Locale_LanguageRange::getWeight() const
	{
		return callMethod<jdouble>(
			"getWeight",
			"()D"
		);
	}
	inline jint Locale_LanguageRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Locale_LanguageRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

