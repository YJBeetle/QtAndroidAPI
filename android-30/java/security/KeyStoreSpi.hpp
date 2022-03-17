#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../io/InputStream.def.hpp"
#include "../io/OutputStream.def.hpp"
#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./cert/Certificate.def.hpp"
#include "../util/Date.def.hpp"
#include "./KeyStoreSpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyStoreSpi::KeyStoreSpi()
		: JObject(
			"java.security.KeyStoreSpi",
			"()V"
		) {}
	
	// Methods
	inline JObject KeyStoreSpi::engineAliases() const
	{
		return callObjectMethod(
			"engineAliases",
			"()Ljava/util/Enumeration;"
		);
	}
	inline jboolean KeyStoreSpi::engineContainsAlias(JString arg0) const
	{
		return callMethod<jboolean>(
			"engineContainsAlias",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void KeyStoreSpi::engineDeleteEntry(JString arg0) const
	{
		callMethod<void>(
			"engineDeleteEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean KeyStoreSpi::engineEntryInstanceOf(JString arg0, JClass arg1) const
	{
		return callMethod<jboolean>(
			"engineEntryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		);
	}
	inline java::security::cert::Certificate KeyStoreSpi::engineGetCertificate(JString arg0) const
	{
		return callObjectMethod(
			"engineGetCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0.object<jstring>()
		);
	}
	inline JString KeyStoreSpi::engineGetCertificateAlias(java::security::cert::Certificate arg0) const
	{
		return callObjectMethod(
			"engineGetCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JArray KeyStoreSpi::engineGetCertificateChain(JString arg0) const
	{
		return callObjectMethod(
			"engineGetCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Date KeyStoreSpi::engineGetCreationDate(JString arg0) const
	{
		return callObjectMethod(
			"engineGetCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0.object<jstring>()
		);
	}
	inline JObject KeyStoreSpi::engineGetEntry(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"engineGetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject KeyStoreSpi::engineGetKey(JString arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"engineGetKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		);
	}
	inline jboolean KeyStoreSpi::engineIsCertificateEntry(JString arg0) const
	{
		return callMethod<jboolean>(
			"engineIsCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean KeyStoreSpi::engineIsKeyEntry(JString arg0) const
	{
		return callMethod<jboolean>(
			"engineIsKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void KeyStoreSpi::engineLoad(JObject arg0) const
	{
		callMethod<void>(
			"engineLoad",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	inline void KeyStoreSpi::engineLoad(java::io::InputStream arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"engineLoad",
			"(Ljava/io/InputStream;[C)V",
			arg0.object(),
			arg1.object<jcharArray>()
		);
	}
	inline jboolean KeyStoreSpi::engineProbe(java::io::InputStream arg0) const
	{
		return callMethod<jboolean>(
			"engineProbe",
			"(Ljava/io/InputStream;)Z",
			arg0.object()
		);
	}
	inline void KeyStoreSpi::engineSetCertificateEntry(JString arg0, java::security::cert::Certificate arg1) const
	{
		callMethod<void>(
			"engineSetCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void KeyStoreSpi::engineSetEntry(JString arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"engineSetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void KeyStoreSpi::engineSetKeyEntry(JString arg0, JByteArray arg1, JArray arg2) const
	{
		callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2.object<jarray>()
		);
	}
	inline void KeyStoreSpi::engineSetKeyEntry(JString arg0, JObject arg1, JCharArray arg2, JArray arg3) const
	{
		callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jcharArray>(),
			arg3.object<jarray>()
		);
	}
	inline jint KeyStoreSpi::engineSize() const
	{
		return callMethod<jint>(
			"engineSize",
			"()I"
		);
	}
	inline void KeyStoreSpi::engineStore(JObject arg0) const
	{
		callMethod<void>(
			"engineStore",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	inline void KeyStoreSpi::engineStore(java::io::OutputStream arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"engineStore",
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
