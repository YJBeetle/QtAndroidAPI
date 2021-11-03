#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../app/Activity.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../net/Uri.hpp"
#include "./AppUriAuthenticationPolicy.hpp"
#include "../../JString.hpp"
#include "./KeyChain.hpp"

namespace android::security
{
	// Fields
	JString KeyChain::ACTION_KEYCHAIN_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEYCHAIN_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::ACTION_KEY_ACCESS_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEY_ACCESS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::ACTION_STORAGE_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_STORAGE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::ACTION_TRUST_STORE_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_TRUST_STORE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::EXTRA_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::EXTRA_KEY_ACCESSIBLE()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ACCESSIBLE",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::EXTRA_KEY_ALIAS()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ALIAS",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::EXTRA_NAME()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_NAME",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::EXTRA_PKCS12()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_PKCS12",
			"Ljava/lang/String;"
		);
	}
	JString KeyChain::KEY_ALIAS_SELECTION_DENIED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"KEY_ALIAS_SELECTION_DENIED",
			"Ljava/lang/String;"
		);
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
	void KeyChain::choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, JArray arg2, JArray arg3, android::net::Uri arg4, JString arg5)
	{
		callStaticMethod<void>(
			"android.security.KeyChain",
			"choosePrivateKeyAlias",
			"(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jarray>(),
			arg4.object(),
			arg5.object<jstring>()
		);
	}
	void KeyChain::choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, JArray arg2, JArray arg3, JString arg4, jint arg5, JString arg6)
	{
		callStaticMethod<void>(
			"android.security.KeyChain",
			"choosePrivateKeyAlias",
			"(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5,
			arg6.object<jstring>()
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
	android::content::Intent KeyChain::createManageCredentialsIntent(android::security::AppUriAuthenticationPolicy arg0)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"createManageCredentialsIntent",
			"(Landroid/security/AppUriAuthenticationPolicy;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	JArray KeyChain::getCertificateChain(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"getCertificateChain",
			"(Landroid/content/Context;Ljava/lang/String;)[Ljava/security/cert/X509Certificate;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::security::AppUriAuthenticationPolicy KeyChain::getCredentialManagementAppPolicy(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"getCredentialManagementAppPolicy",
			"(Landroid/content/Context;)Landroid/security/AppUriAuthenticationPolicy;",
			arg0.object()
		);
	}
	JObject KeyChain::getPrivateKey(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"getPrivateKey",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/security/PrivateKey;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean KeyChain::isBoundKeyAlgorithm(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isBoundKeyAlgorithm",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean KeyChain::isCredentialManagementApp(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isCredentialManagementApp",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jboolean KeyChain::isKeyAlgorithmSupported(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isKeyAlgorithmSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean KeyChain::removeCredentialManagementApp(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"removeCredentialManagementApp",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
} // namespace android::security

