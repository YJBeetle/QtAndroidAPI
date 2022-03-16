#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./UrlQuerySanitizer.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	UrlQuerySanitizer::UrlQuerySanitizer()
		: JObject(
			"android.net.UrlQuerySanitizer",
			"()V"
		) {}
	UrlQuerySanitizer::UrlQuerySanitizer(JString arg0)
		: JObject(
			"android.net.UrlQuerySanitizer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JObject UrlQuerySanitizer::getAllButNulAndAngleBracketsLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulAndAngleBracketsLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getAllButNulLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getAllButWhitespaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButWhitespaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getAllIllegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllIllegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getAmpAndSpaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getAmpLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getSpaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getUrlAndSpaceLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getUrlAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JObject UrlQuerySanitizer::getUrlLegal()
	{
		return callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getUrlLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	jboolean UrlQuerySanitizer::getAllowUnregisteredParamaters() const
	{
		return callMethod<jboolean>(
			"getAllowUnregisteredParamaters",
			"()Z"
		);
	}
	JObject UrlQuerySanitizer::getEffectiveValueSanitizer(JString arg0) const
	{
		return callObjectMethod(
			"getEffectiveValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0.object<jstring>()
		);
	}
	JObject UrlQuerySanitizer::getParameterList() const
	{
		return callObjectMethod(
			"getParameterList",
			"()Ljava/util/List;"
		);
	}
	JObject UrlQuerySanitizer::getParameterSet() const
	{
		return callObjectMethod(
			"getParameterSet",
			"()Ljava/util/Set;"
		);
	}
	jboolean UrlQuerySanitizer::getPreferFirstRepeatedParameter() const
	{
		return callMethod<jboolean>(
			"getPreferFirstRepeatedParameter",
			"()Z"
		);
	}
	JObject UrlQuerySanitizer::getUnregisteredParameterValueSanitizer() const
	{
		return callObjectMethod(
			"getUnregisteredParameterValueSanitizer",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JString UrlQuerySanitizer::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject UrlQuerySanitizer::getValueSanitizer(JString arg0) const
	{
		return callObjectMethod(
			"getValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0.object<jstring>()
		);
	}
	jboolean UrlQuerySanitizer::hasParameter(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasParameter",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void UrlQuerySanitizer::parseQuery(JString arg0) const
	{
		callMethod<void>(
			"parseQuery",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void UrlQuerySanitizer::parseUrl(JString arg0) const
	{
		callMethod<void>(
			"parseUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void UrlQuerySanitizer::registerParameter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerParameter",
			"(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void UrlQuerySanitizer::registerParameters(JArray arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerParameters",
			"([Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void UrlQuerySanitizer::setAllowUnregisteredParamaters(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowUnregisteredParamaters",
			"(Z)V",
			arg0
		);
	}
	void UrlQuerySanitizer::setPreferFirstRepeatedParameter(jboolean arg0) const
	{
		callMethod<void>(
			"setPreferFirstRepeatedParameter",
			"(Z)V",
			arg0
		);
	}
	void UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(JObject arg0) const
	{
		callMethod<void>(
			"setUnregisteredParameterValueSanitizer",
			"(Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object()
		);
	}
	JString UrlQuerySanitizer::unescape(JString arg0) const
	{
		return callObjectMethod(
			"unescape",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

