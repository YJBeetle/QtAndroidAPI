#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}

namespace android::security
{
	class KeyChain : public JObject
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
		static jstring KEY_ALIAS_SELECTION_DENIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyChain(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyChain(QJniObject obj);
		
		// Constructors
		KeyChain();
		
		// Methods
		static void choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, jarray arg2, jarray arg3, android::net::Uri arg4, jstring arg5);
		static void choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, jarray arg2, jarray arg3, jstring arg4, jint arg5, jstring arg6);
		static android::content::Intent createInstallIntent();
		static jarray getCertificateChain(android::content::Context arg0, jstring arg1);
		static JObject getPrivateKey(android::content::Context arg0, jstring arg1);
		static jboolean isBoundKeyAlgorithm(jstring arg0);
		static jboolean isKeyAlgorithmSupported(jstring arg0);
	};
} // namespace android::security

