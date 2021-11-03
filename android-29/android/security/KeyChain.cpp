#include "../app/Activity.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../net/Uri.hpp"
#include "./KeyChain.hpp"

namespace android::security
{
	// Fields
	jstring KeyChain::ACTION_KEYCHAIN_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEYCHAIN_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::ACTION_KEY_ACCESS_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEY_ACCESS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::ACTION_STORAGE_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_STORAGE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::ACTION_TRUST_STORE_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_TRUST_STORE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_CERTIFICATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_KEY_ACCESSIBLE()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ACCESSIBLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_KEY_ALIAS()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ALIAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_NAME()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring KeyChain::EXTRA_PKCS12()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_PKCS12",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	KeyChain::KeyChain(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyChain::KeyChain()
		: JObject(
			"android.security.KeyChain",
			"()V"
		) {}
	
	// Methods
	void KeyChain::choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, jarray arg2, jarray arg3, android::net::Uri arg4, jstring arg5)
	{
		callStaticMethod<void>(
			"android.security.KeyChain",
			"choosePrivateKeyAlias",
			"(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	void KeyChain::choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, jarray arg2, jarray arg3, jstring arg4, jint arg5, jstring arg6)
	{
		callStaticMethod<void>(
			"android.security.KeyChain",
			"choosePrivateKeyAlias",
			"(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	android::content::Intent KeyChain::createInstallIntent()
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"createInstallIntent",
			"()Landroid/content/Intent;"
		);
	}
	jarray KeyChain::getCertificateChain(android::content::Context arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"getCertificateChain",
			"(Landroid/content/Context;Ljava/lang/String;)[Ljava/security/cert/X509Certificate;",
			arg0.object(),
			arg1
		).object<jarray>();
	}
	JObject KeyChain::getPrivateKey(android::content::Context arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"getPrivateKey",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/security/PrivateKey;",
			arg0.object(),
			arg1
		);
	}
	jboolean KeyChain::isBoundKeyAlgorithm(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isBoundKeyAlgorithm",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyChain::isKeyAlgorithmSupported(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isKeyAlgorithmSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
} // namespace android::security

