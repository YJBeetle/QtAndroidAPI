#pragma once

#include "../io/File.def.hpp"
#include "../../JString.hpp"
#include "./KeyStore.def.hpp"
#include "./Provider.def.hpp"
#include "./KeyStore_Builder.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::KeyStore_Builder KeyStore_Builder::newInstance(java::io::File arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::security::KeyStore_Builder KeyStore_Builder::newInstance(java::security::KeyStore arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::security::KeyStore_Builder KeyStore_Builder::newInstance(JString arg0, java::security::Provider arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::security::KeyStore_Builder KeyStore_Builder::newInstance(JString arg0, java::security::Provider arg1, java::io::File arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore$Builder",
			"newInstance",
			"(Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline java::security::KeyStore KeyStore_Builder::getKeyStore() const
	{
		return callObjectMethod(
			"getKeyStore",
			"()Ljava/security/KeyStore;"
		);
	}
	inline JObject KeyStore_Builder::getProtectionParameter(JString arg0) const
	{
		return callObjectMethod(
			"getProtectionParameter",
			"(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;",
			arg0.object<jstring>()
		);
	}
} // namespace java::security

// Base class headers

