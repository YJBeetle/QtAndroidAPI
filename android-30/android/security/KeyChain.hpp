#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../app/Activity.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./KeyChain.def.hpp"

namespace android::security
{
	// Fields
	inline JString KeyChain::ACTION_KEYCHAIN_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEYCHAIN_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::ACTION_KEY_ACCESS_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_KEY_ACCESS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::ACTION_STORAGE_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_STORAGE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::ACTION_TRUST_STORE_CHANGED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"ACTION_TRUST_STORE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::EXTRA_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::EXTRA_KEY_ACCESSIBLE()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ACCESSIBLE",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::EXTRA_KEY_ALIAS()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_KEY_ALIAS",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::EXTRA_NAME()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::EXTRA_PKCS12()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"EXTRA_PKCS12",
			"Ljava/lang/String;"
		);
	}
	inline JString KeyChain::KEY_ALIAS_SELECTION_DENIED()
	{
		return getStaticObjectField(
			"android.security.KeyChain",
			"KEY_ALIAS_SELECTION_DENIED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline KeyChain::KeyChain()
		: JObject(
			"android.security.KeyChain",
			"()V"
		) {}
	
	// Methods
	inline void KeyChain::choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, JArray arg2, JArray arg3, android::net::Uri arg4, JString arg5)
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
	inline void KeyChain::choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, JArray arg2, JArray arg3, JString arg4, jint arg5, JString arg6)
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
	inline android::content::Intent KeyChain::createInstallIntent()
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"createInstallIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JArray KeyChain::getCertificateChain(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"getCertificateChain",
			"(Landroid/content/Context;Ljava/lang/String;)[Ljava/security/cert/X509Certificate;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JObject KeyChain::getPrivateKey(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.security.KeyChain",
			"getPrivateKey",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/security/PrivateKey;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean KeyChain::isBoundKeyAlgorithm(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isBoundKeyAlgorithm",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean KeyChain::isKeyAlgorithmSupported(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.security.KeyChain",
			"isKeyAlgorithmSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
