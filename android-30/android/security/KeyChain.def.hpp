#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
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
class JString;

namespace android::security
{
	class KeyChain : public JObject
	{
	public:
		// Fields
		static JString ACTION_KEYCHAIN_CHANGED();
		static JString ACTION_KEY_ACCESS_CHANGED();
		static JString ACTION_STORAGE_CHANGED();
		static JString ACTION_TRUST_STORE_CHANGED();
		static JString EXTRA_CERTIFICATE();
		static JString EXTRA_KEY_ACCESSIBLE();
		static JString EXTRA_KEY_ALIAS();
		static JString EXTRA_NAME();
		static JString EXTRA_PKCS12();
		static JString KEY_ALIAS_SELECTION_DENIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyChain(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyChain(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyChain();
		
		// Methods
		static void choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, JArray arg2, JArray arg3, android::net::Uri arg4, JString arg5);
		static void choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, JArray arg2, JArray arg3, JString arg4, jint arg5, JString arg6);
		static android::content::Intent createInstallIntent();
		static JArray getCertificateChain(android::content::Context arg0, JString arg1);
		static JObject getPrivateKey(android::content::Context arg0, JString arg1);
		static jboolean isBoundKeyAlgorithm(JString arg0);
		static jboolean isKeyAlgorithmSupported(JString arg0);
	};
} // namespace android::security

