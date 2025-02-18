#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.def.hpp"
#include "../io/InputStream.def.hpp"
#include "../io/OutputStream.def.hpp"
#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./KeyStoreSpi.def.hpp"
#include "./Provider.def.hpp"
#include "./cert/Certificate.def.hpp"
#include "../util/Date.def.hpp"
#include "./KeyStore.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString KeyStore::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::KeyStore KeyStore::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0.object<jstring>()
		);
	}
	inline java::security::KeyStore KeyStore::getInstance(java::io::File arg0, JCharArray arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;[C)Ljava/security/KeyStore;",
			arg0.object(),
			arg1.object<jcharArray>()
		);
	}
	inline java::security::KeyStore KeyStore::getInstance(java::io::File arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$LoadStoreParameter;)Ljava/security/KeyStore;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::security::KeyStore KeyStore::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::KeyStore KeyStore::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject KeyStore::aliases() const
	{
		return callObjectMethod(
			"aliases",
			"()Ljava/util/Enumeration;"
		);
	}
	inline jboolean KeyStore::containsAlias(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsAlias",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void KeyStore::deleteEntry(JString arg0) const
	{
		callMethod<void>(
			"deleteEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean KeyStore::entryInstanceOf(JString arg0, JClass arg1) const
	{
		return callMethod<jboolean>(
			"entryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		);
	}
	inline JObject KeyStore::getAttributes(JString arg0) const
	{
		return callObjectMethod(
			"getAttributes",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0.object<jstring>()
		);
	}
	inline java::security::cert::Certificate KeyStore::getCertificate(JString arg0) const
	{
		return callObjectMethod(
			"getCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0.object<jstring>()
		);
	}
	inline JString KeyStore::getCertificateAlias(java::security::cert::Certificate arg0) const
	{
		return callObjectMethod(
			"getCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JArray KeyStore::getCertificateChain(JString arg0) const
	{
		return callObjectMethod(
			"getCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Date KeyStore::getCreationDate(JString arg0) const
	{
		return callObjectMethod(
			"getCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0.object<jstring>()
		);
	}
	inline JObject KeyStore::getEntry(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject KeyStore::getKey(JString arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"getKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		);
	}
	inline java::security::Provider KeyStore::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JString KeyStore::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean KeyStore::isCertificateEntry(JString arg0) const
	{
		return callMethod<jboolean>(
			"isCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean KeyStore::isKeyEntry(JString arg0) const
	{
		return callMethod<jboolean>(
			"isKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void KeyStore::load(JObject arg0) const
	{
		callMethod<void>(
			"load",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	inline void KeyStore::load(java::io::InputStream arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;[C)V",
			arg0.object(),
			arg1.object<jcharArray>()
		);
	}
	inline void KeyStore::setCertificateEntry(JString arg0, java::security::cert::Certificate arg1) const
	{
		callMethod<void>(
			"setCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void KeyStore::setEntry(JString arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"setEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void KeyStore::setKeyEntry(JString arg0, JByteArray arg1, JArray arg2) const
	{
		callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2.object<jarray>()
		);
	}
	inline void KeyStore::setKeyEntry(JString arg0, JObject arg1, JCharArray arg2, JArray arg3) const
	{
		callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jcharArray>(),
			arg3.object<jarray>()
		);
	}
	inline jint KeyStore::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline void KeyStore::store(JObject arg0) const
	{
		callMethod<void>(
			"store",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	inline void KeyStore::store(java::io::OutputStream arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;[C)V",
			arg0.object(),
			arg1.object<jcharArray>()
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
