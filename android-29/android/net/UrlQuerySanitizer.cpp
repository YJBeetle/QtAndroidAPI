#include "./UrlQuerySanitizer.hpp"

namespace android::net
{
	// Fields
	
	UrlQuerySanitizer::UrlQuerySanitizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UrlQuerySanitizer::UrlQuerySanitizer()
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer",
			"()V"
		);
	}
	UrlQuerySanitizer::UrlQuerySanitizer(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject UrlQuerySanitizer::getAllButNulAndAngleBracketsLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulAndAngleBracketsLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getAllButNulLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButNulLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getAllButWhitespaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllButWhitespaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getAllIllegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAllIllegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getAmpAndSpaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getAmpLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getAmpLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getSpaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getUrlAndSpaceLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getUrlAndSpaceLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getUrlLegal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.UrlQuerySanitizer",
			"getUrlLegal",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	jboolean UrlQuerySanitizer::getAllowUnregisteredParamaters()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowUnregisteredParamaters",
			"()Z"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getEffectiveValueSanitizer(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEffectiveValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getParameterList()
	{
		return __thiz.callObjectMethod(
			"getParameterList",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getParameterSet()
	{
		return __thiz.callObjectMethod(
			"getParameterSet",
			"()Ljava/util/Set;"
		);
	}
	jboolean UrlQuerySanitizer::getPreferFirstRepeatedParameter()
	{
		return __thiz.callMethod<jboolean>(
			"getPreferFirstRepeatedParameter",
			"()Z"
		);
	}
	QAndroidJniObject UrlQuerySanitizer::getUnregisteredParameterValueSanitizer()
	{
		return __thiz.callObjectMethod(
			"getUnregisteredParameterValueSanitizer",
			"()Landroid/net/UrlQuerySanitizer$ValueSanitizer;"
		);
	}
	jstring UrlQuerySanitizer::getValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject UrlQuerySanitizer::getValueSanitizer(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			arg0
		);
	}
	jboolean UrlQuerySanitizer::hasParameter(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasParameter",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void UrlQuerySanitizer::parseQuery(jstring arg0)
	{
		__thiz.callMethod<void>(
			"parseQuery",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UrlQuerySanitizer::parseUrl(jstring arg0)
	{
		__thiz.callMethod<void>(
			"parseUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UrlQuerySanitizer::registerParameter(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"registerParameter",
			"(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void UrlQuerySanitizer::registerParameters(jarray arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"registerParameters",
			"([Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void UrlQuerySanitizer::setAllowUnregisteredParamaters(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowUnregisteredParamaters",
			"(Z)V",
			arg0
		);
	}
	void UrlQuerySanitizer::setPreferFirstRepeatedParameter(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPreferFirstRepeatedParameter",
			"(Z)V",
			arg0
		);
	}
	void UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setUnregisteredParameterValueSanitizer",
			"(Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0.__jniObject().object()
		);
	}
	jstring UrlQuerySanitizer::unescape(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"unescape",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::net

