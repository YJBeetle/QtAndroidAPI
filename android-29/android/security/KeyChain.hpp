#pragma once

#ifndef ANDROID_SECURITY_KEYCHAIN
#define ANDROID_SECURITY_KEYCHAIN

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::security
{
	class KeyChain : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_KEYCHAIN_CHANGED();
		static QAndroidJniObject ACTION_KEY_ACCESS_CHANGED();
		static QAndroidJniObject ACTION_STORAGE_CHANGED();
		static QAndroidJniObject ACTION_TRUST_STORE_CHANGED();
		static QAndroidJniObject EXTRA_CERTIFICATE();
		static QAndroidJniObject EXTRA_KEY_ACCESSIBLE();
		static QAndroidJniObject EXTRA_KEY_ALIAS();
		static QAndroidJniObject EXTRA_NAME();
		static QAndroidJniObject EXTRA_PKCS12();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createInstallIntent();
		static void choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, __jni_impl::android::net::Uri arg4, jstring arg5);
		static void choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, jstring arg4, jint arg5, jstring arg6);
		static QAndroidJniObject getPrivateKey(__jni_impl::android::content::Context arg0, jstring arg1);
		static QAndroidJniObject getCertificateChain(__jni_impl::android::content::Context arg0, jstring arg1);
		static jboolean isKeyAlgorithmSupported(jstring arg0);
		static jboolean isBoundKeyAlgorithm(jstring arg0);
	};
} // namespace __jni_impl::android::security

#include "../content/Intent.hpp"
#include "../app/Activity.hpp"
#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::security
{
	// Fields
	QAndroidJniObject KeyChain::ACTION_KEYCHAIN_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEYCHAIN_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::ACTION_KEY_ACCESS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEY_ACCESS_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::ACTION_STORAGE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_STORAGE_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::ACTION_TRUST_STORE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_TRUST_STORE_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::EXTRA_CERTIFICATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_CERTIFICATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::EXTRA_KEY_ACCESSIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ACCESSIBLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::EXTRA_KEY_ALIAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ALIAS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::EXTRA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject KeyChain::EXTRA_PKCS12()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_PKCS12",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void KeyChain::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChain",
			"()V");
	}
	
	// Methods
	QAndroidJniObject KeyChain::createInstallIntent()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"createInstallIntent",
			"()Landroid/content/Intent;");
	}
	void KeyChain::choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, __jni_impl::android::net::Uri arg4, jstring arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.security.KeyChain",
			"choosePrivateKeyAlias",
			"(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5);
	}
	void KeyChain::choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, jstring arg4, jint arg5, jstring arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.security.KeyChain",
			"choosePrivateKeyAlias",
			"(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	QAndroidJniObject KeyChain::getPrivateKey(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"getPrivateKey",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/security/PrivateKey;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject KeyChain::getCertificateChain(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"getCertificateChain",
			"(Landroid/content/Context;Ljava/lang/String;)[Ljava/security/cert/X509Certificate;",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean KeyChain::isKeyAlgorithmSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isKeyAlgorithmSupported",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean KeyChain::isBoundKeyAlgorithm(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isBoundKeyAlgorithm",
			"(Ljava/lang/String;)Z",
			arg0);
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class KeyChain : public __jni_impl::android::security::KeyChain
	{
	public:
		KeyChain(QAndroidJniObject obj) { __thiz = obj; }
		KeyChain()
		{
			__constructor();
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_KEYCHAIN

