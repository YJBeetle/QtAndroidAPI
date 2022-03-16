#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./UrlQuerySanitizer.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline UrlQuerySanitizer::UrlQuerySanitizer()
		: JObject(
			"android.net.UrlQuerySanitizer",
			"()V"
		) {}
	inline UrlQuerySanitizer::UrlQuerySanitizer(JString arg0)
		: JObject(
			"android.net.UrlQuerySanitizer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JObject UrlQuerySanitizer::getAllButNulAndAngleBracketsLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulAndAngleBracketsLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getAllButNulLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getAllButWhitespaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButWhitespaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getAllIllegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllIllegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getAmpAndSpaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getAmpLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getSpaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getUrlAndSpaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getUrlAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JObject UrlQuerySanitizer::getUrlLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getUrlLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline jboolean UrlQuerySanitizer::getAllowUnregisteredParamaters() const
	{
		return callMethod<jboolean>(
			"getAllowUnregisteredParamaters",
			"()Z"
		);
	}
	inline JObject UrlQuerySanitizer::getEffectiveValueSanitizer(JString arg0) const
	{
		return callObjectMethod(
			"getEffectiveValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0.object<jstring>()
		);
	}
	inline JObject UrlQuerySanitizer::getParameterList() const
	{
		return callObjectMethod(
			"getParameterList",
			"()Ljava/util/List;"
		);
	}
	inline JObject UrlQuerySanitizer::getParameterSet() const
	{
		return callObjectMethod(
			"getParameterSet",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean UrlQuerySanitizer::getPreferFirstRepeatedParameter() const
	{
		return callMethod<jboolean>(
			"getPreferFirstRepeatedParameter",
			"()Z"
		);
	}
	inline JObject UrlQuerySanitizer::getUnregisteredParameterValueSanitizer() const
	{
		return callObjectMethod(
			"getUnregisteredParameterValueSanitizer",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	inline JString UrlQuerySanitizer::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject UrlQuerySanitizer::getValueSanitizer(JString arg0) const
	{
		return callObjectMethod(
			"getValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0.object<jstring>()
		);
	}
	inline jboolean UrlQuerySanitizer::hasParameter(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasParameter",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void UrlQuerySanitizer::parseQuery(JString arg0) const
	{
		callMethod<void>(
			"parseQuery",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void UrlQuerySanitizer::parseUrl(JString arg0) const
	{
		callMethod<void>(
			"parseUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void UrlQuerySanitizer::registerParameter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerParameter",
			"(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void UrlQuerySanitizer::registerParameters(JArray arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerParameters",
			"([Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void UrlQuerySanitizer::setAllowUnregisteredParamaters(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUnregisteredParamaters",
			"(Z)V",
			arg0
		);
	}
	inline void UrlQuerySanitizer::setPreferFirstRepeatedParameter(jboolean arg0) const
	{
		callMethod<void>(
			"setPreferFirstRepeatedParameter",
			"(Z)V",
			arg0
		);
	}
	inline void UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(JObject arg0) const
	{
		callMethod<void>(
			"setUnregisteredParameterValueSanitizer",
			"(Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object()
		);
	}
	inline JString UrlQuerySanitizer::unescape(JString arg0) const
	{
		return callObjectMethod(
			"unescape",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

// Base class headers

