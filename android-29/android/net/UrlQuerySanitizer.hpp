#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class UrlQuerySanitizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		static QAndroidJniObject getAllButNulAndAngleBracketsLegal();
		static QAndroidJniObject getAllButNulLegal();
		static QAndroidJniObject getAllButWhitespaceLegal();
		static QAndroidJniObject getAllIllegal();
		static QAndroidJniObject getAmpAndSpaceLegal();
		static QAndroidJniObject getAmpLegal();
		static QAndroidJniObject getSpaceLegal();
		static QAndroidJniObject getUrlAndSpaceLegal();
		static QAndroidJniObject getUrlLegal();
		jboolean getAllowUnregisteredParamaters();
		QAndroidJniObject getEffectiveValueSanitizer(jstring arg0);
		QAndroidJniObject getEffectiveValueSanitizer(const QString &arg0);
		QAndroidJniObject getParameterList();
		QAndroidJniObject getParameterSet();
		jboolean getPreferFirstRepeatedParameter();
		QAndroidJniObject getUnregisteredParameterValueSanitizer();
		jstring getValue(jstring arg0);
		jstring getValue(const QString &arg0);
		QAndroidJniObject getValueSanitizer(jstring arg0);
		QAndroidJniObject getValueSanitizer(const QString &arg0);
		jboolean hasParameter(jstring arg0);
		jboolean hasParameter(const QString &arg0);
		void parseQuery(jstring arg0);
		void parseQuery(const QString &arg0);
		void parseUrl(jstring arg0);
		void parseUrl(const QString &arg0);
		void registerParameter(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void registerParameter(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void registerParameters(jarray arg0, __jni_impl::__JniBaseClass arg1);
		void setAllowUnregisteredParamaters(jboolean arg0);
		void setPreferFirstRepeatedParameter(jboolean arg0);
		void setUnregisteredParameterValueSanitizer(__jni_impl::__JniBaseClass arg0);
		jstring unescape(jstring arg0);
		jstring unescape(const QString &arg0);
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void UrlQuerySanitizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer",
			"()V"
		);
	}
	void UrlQuerySanitizer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UrlQuerySanitizer::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject UrlQuerySanitizer::getEffectiveValueSanitizer(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getEffectiveValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring UrlQuerySanitizer::getValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject UrlQuerySanitizer::getValueSanitizer(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getValueSanitizer",
			"(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean UrlQuerySanitizer::hasParameter(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasParameter",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void UrlQuerySanitizer::parseQuery(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"parseQuery",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void UrlQuerySanitizer::parseUrl(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"parseUrl",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void UrlQuerySanitizer::registerParameter(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"registerParameter",
			"(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void UrlQuerySanitizer::registerParameter(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"registerParameter",
			"(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void UrlQuerySanitizer::registerParameters(jarray arg0, __jni_impl::__JniBaseClass arg1)
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
	void UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(__jni_impl::__JniBaseClass arg0)
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
	jstring UrlQuerySanitizer::unescape(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"unescape",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class UrlQuerySanitizer : public __jni_impl::android::net::UrlQuerySanitizer
	{
	public:
		UrlQuerySanitizer(QAndroidJniObject obj) { __thiz = obj; }
		UrlQuerySanitizer()
		{
			__constructor();
		}
		UrlQuerySanitizer(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

