#include "../io/File.hpp"
#include "./KeyStore.hpp"
#include "./Provider.hpp"
#include "./KeyStore_Builder.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_Builder::KeyStore_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(java::io::File arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(java::security::KeyStore arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(jstring arg0, java::security::Provider arg1, __JniBaseClass arg2)
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
	java::security::KeyStore_Builder KeyStore_Builder::newInstance(jstring arg0, java::security::Provider arg1, java::io::File arg2, __JniBaseClass arg3)
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
	__JniBaseClass KeyStore_Builder::getProtectionParameter(jstring arg0)
	{
		return callObjectMethod(
			"getProtectionParameter",
			"(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;",
			arg0
		);
	}
} // namespace java::security

