#include "../io/File.hpp"
#include "./KeyStore.hpp"
#include "./Provider.hpp"
#include "./KeyStore_Builder.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStore_Builder::KeyStore_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(java::io::File arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(java::security::KeyStore arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(jstring arg0, java::security::Provider arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(jstring arg0, java::security::Provider arg1, java::io::File arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	java::security::KeyStore KeyStore_Builder::getKeyStore()
	{
		return callObjectMethod(
			"getKeyStore",
			"()Ljava/security/KeyStore;"
		);
	}
	JObject KeyStore_Builder::getProtectionParameter(jstring arg0)
	{
		return callObjectMethod(
			"getProtectionParameter",
			"(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;",
			arg0
		);
	}
} // namespace java::security

