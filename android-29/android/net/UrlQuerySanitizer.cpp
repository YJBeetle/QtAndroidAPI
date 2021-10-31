#include "./UrlQuerySanitizer.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	UrlQuerySanitizer::UrlQuerySanitizer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UrlQuerySanitizer::UrlQuerySanitizer()
		: __JniBaseClass(
			"android.net.UrlQuerySanitizer",
			"()V"
		) {}
	UrlQuerySanitizer::UrlQuerySanitizer(jstring arg0)
		: __JniBaseClass(
			"android.net.UrlQuerySanitizer",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	__JniBaseClass UrlQuerySanitizer::getAllButNulAndAngleBracketsLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulAndAngleBracketsLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getAllButNulLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getAllButWhitespaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButWhitespaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getAllIllegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllIllegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getAmpAndSpaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getAmpLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getSpaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getUrlAndSpaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getUrlAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getUrlLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	__JniBaseClass UrlQuerySanitizer::getEffectiveValueSanitizer(jstring arg0)
	{
		return callObjectMethod(
			"getEffectiveValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0
		);
	}
	__JniBaseClass UrlQuerySanitizer::getParameterList()
	{
		return callObjectMethod(
			"getParameterList",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass UrlQuerySanitizer::getParameterSet()
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
	__JniBaseClass UrlQuerySanitizer::getUnregisteredParameterValueSanitizer()
	{
		return callObjectMethod(
			"getUnregisteredParameterValueSanitizer",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	jstring UrlQuerySanitizer::getValue(jstring arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass UrlQuerySanitizer::getValueSanitizer(jstring arg0)
	{
		return callObjectMethod(
			"getValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0
		);
	}
	jboolean UrlQuerySanitizer::hasParameter(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasParameter",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void UrlQuerySanitizer::parseQuery(jstring arg0)
	{
		callMethod<void>(
			"parseQuery",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UrlQuerySanitizer::parseUrl(jstring arg0)
	{
		callMethod<void>(
			"parseUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UrlQuerySanitizer::registerParameter(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"registerParameter",
			"(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0,
			arg1.object()
		);
	}
	void UrlQuerySanitizer::registerParameters(jarray arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"registerParameters",
			"([Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0,
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
	void UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setUnregisteredParameterValueSanitizer",
			"(Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.object()
		);
	}
	jstring UrlQuerySanitizer::unescape(jstring arg0)
	{
		return callObjectMethod(
			"unescape",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::net

