#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./UrlQuerySanitizer.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	UrlQuerySanitizer::UrlQuerySanitizer(QJniObject obj) : JObject(obj) {}
	
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
	jboolean UrlQuerySanitizer::getAllowUnregisteredParamaters()
	{
		return callMethod<jboolean>(
			"getAllowUnregisteredParamaters",
			"()Z"
		);
	}
	JObject UrlQuerySanitizer::getEffectiveValueSanitizer(JString arg0)
	{
		return callObjectMethod(
			"getEffectiveValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0.object<jstring>()
		);
	}
	JObject UrlQuerySanitizer::getParameterList()
	{
		return callObjectMethod(
			"getParameterList",
			"()Ljava/util/List;"
		);
	}
	JObject UrlQuerySanitizer::getParameterSet()
	{
		return callObjectMethod(
			"getParameterSet",
			"()Ljava/util/Set;"
		);
	}
	jboolean UrlQuerySanitizer::getPreferFirstRepeatedParameter()
	{
		return callMethod<jboolean>(
			"getPreferFirstRepeatedParameter",
			"()Z"
		);
	}
	JObject UrlQuerySanitizer::getUnregisteredParameterValueSanitizer()
	{
		return callObjectMethod(
			"getUnregisteredParameterValueSanitizer",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	JString UrlQuerySanitizer::getValue(JString arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject UrlQuerySanitizer::getValueSanitizer(JString arg0)
	{
		return callObjectMethod(
			"getValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0.object<jstring>()
		);
	}
	jboolean UrlQuerySanitizer::hasParameter(JString arg0)
	{
		return callMethod<jboolean>(
			"hasParameter",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void UrlQuerySanitizer::parseQuery(JString arg0)
	{
		callMethod<void>(
			"parseQuery",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void UrlQuerySanitizer::parseUrl(JString arg0)
	{
		callMethod<void>(
			"parseUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void UrlQuerySanitizer::registerParameter(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"registerParameter",
			"(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void UrlQuerySanitizer::registerParameters(JArray arg0, JObject arg1)
	{
		callMethod<void>(
			"registerParameters",
			"([Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void UrlQuerySanitizer::setAllowUnregisteredParamaters(jboolean arg0)
	{
		callMethod<void>(
			"setAllowUnregisteredParamaters",
			"(Z)V",
			arg0
		);
	}
	void UrlQuerySanitizer::setPreferFirstRepeatedParameter(jboolean arg0)
	{
		callMethod<void>(
			"setPreferFirstRepeatedParameter",
			"(Z)V",
			arg0
		);
	}
	void UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(JObject arg0)
	{
		callMethod<void>(
			"setUnregisteredParameterValueSanitizer",
			"(Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object()
		);
	}
	JString UrlQuerySanitizer::unescape(JString arg0)
	{
		return callObjectMethod(
			"unescape",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

