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
		static jstring ACTION_KEYCHAIN_CHANGED();
		static jstring ACTION_KEY_ACCESS_CHANGED();
		static jstring ACTION_STORAGE_CHANGED();
		static jstring ACTION_TRUST_STORE_CHANGED();
		static jstring EXTRA_CERTIFICATE();
		static jstring EXTRA_KEY_ACCESSIBLE();
		static jstring EXTRA_KEY_ALIAS();
		static jstring EXTRA_NAME();
		static jstring EXTRA_PKCS12();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createInstallIntent();
		static void choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, __jni_impl::android::net::Uri arg4, jstring arg5);
		static void choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, __jni_impl::android::net::Uri arg4, const QString &arg5);
		static void choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, jstring arg4, jint arg5, jstring arg6);
		static void choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, const QString &arg4, jint arg5, const QString &arg6);
		static QAndroidJniObject getPrivateKey(__jni_impl::android::content::Context arg0, jstring arg1);
		static QAndroidJniObject getPrivateKey(__jni_impl::android::content::Context arg0, const QString &arg1);
		static jarray getCertificateChain(__jni_impl::android::content::Context arg0, jstring arg1);
		static jarray getCertificateChain(__jni_impl::android::content::Context arg0, const QString &arg1);
		static jboolean isKeyAlgorithmSupported(jstring arg0);
		static jboolean isKeyAlgorithmSupported(const QString &arg0);
		static jboolean isBoundKeyAlgorithm(jstring arg0);
		static jboolean isBoundKeyAlgorithm(const QString &arg0);
	};
} // namespace __jni_impl::android::security

#include "../content/Intent.hpp"
#include "../app/Activity.hpp"
#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::security
{
	// Fields
	jstring KeyChain::ACTION_KEYCHAIN_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEYCHAIN_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::ACTION_KEY_ACCESS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEY_ACCESS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::ACTION_STORAGE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_STORAGE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::ACTION_TRUST_STORE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_TRUST_STORE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_CERTIFICATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_CERTIFICATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_KEY_ACCESSIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ACCESSIBLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_KEY_ALIAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ALIAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_PKCS12()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_PKCS12",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void KeyChain::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChain",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject KeyChain::createInstallIntent()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"createInstallIntent",
			"()Landroid/content/Intent;"
		);
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
			arg5
		);
	}
	void KeyChain::choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, __jni_impl::android::net::Uri arg4, const QString &arg5)
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
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
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
			arg6
		);
	}
	void KeyChain::choosePrivateKeyAlias(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, jarray arg2, jarray arg3, const QString &arg4, jint arg5, const QString &arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.security.KeyChain",
			"choosePrivateKeyAlias",
			"(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5,
			QAndroidJniObject::fromString(arg6).object<jstring>()
		);
	}
	QAndroidJniObject KeyChain::getPrivateKey(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"getPrivateKey",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/security/PrivateKey;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject KeyChain::getPrivateKey(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"getPrivateKey",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/security/PrivateKey;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jarray KeyChain::getCertificateChain(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"getCertificateChain",
			"(Landroid/content/Context;Ljava/lang/String;)[Ljava/security/cert/X509Certificate;",
			arg0.__jniObject().object(),
			arg1
		).object<jarray>();
	}
	jarray KeyChain::getCertificateChain(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.KeyChain",
			"getCertificateChain",
			"(Landroid/content/Context;Ljava/lang/String;)[Ljava/security/cert/X509Certificate;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	jboolean KeyChain::isKeyAlgorithmSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isKeyAlgorithmSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyChain::isKeyAlgorithmSupported(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isKeyAlgorithmSupported",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean KeyChain::isBoundKeyAlgorithm(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isBoundKeyAlgorithm",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyChain::isBoundKeyAlgorithm(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isBoundKeyAlgorithm",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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

