#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "./cert/Certificate.hpp"
#include "../util/Date.hpp"
#include "./KeyStoreSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStoreSpi::KeyStoreSpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStoreSpi::KeyStoreSpi()
		: JObject(
			"java.security.KeyStoreSpi",
			"()V"
		) {}
	
	// Methods
	JObject KeyStoreSpi::engineAliases()
	{
		return callObjectMethod(
			"engineAliases",
			"()Ljava/util/Enumeration;"
		);
	}
	jboolean KeyStoreSpi::engineContainsAlias(jstring arg0)
	{
		return callMethod<jboolean>(
			"engineContainsAlias",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void KeyStoreSpi::engineDeleteEntry(jstring arg0)
	{
		callMethod<void>(
			"engineDeleteEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean KeyStoreSpi::engineEntryInstanceOf(jstring arg0, jclass arg1)
	{
		return callMethod<jboolean>(
			"engineEntryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0,
			arg1
		);
	}
	java::security::cert::Certificate KeyStoreSpi::engineGetCertificate(jstring arg0)
	{
		return callObjectMethod(
			"engineGetCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0
		);
	}
	jstring KeyStoreSpi::engineGetCertificateAlias(java::security::cert::Certificate arg0)
	{
		return callObjectMethod(
			"engineGetCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jarray KeyStoreSpi::engineGetCertificateChain(jstring arg0)
	{
		return callObjectMethod(
			"engineGetCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0
		).object<jarray>();
	}
	java::util::Date KeyStoreSpi::engineGetCreationDate(jstring arg0)
	{
		return callObjectMethod(
			"engineGetCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	JObject KeyStoreSpi::engineGetEntry(jstring arg0, JObject arg1)
	{
		return callObjectMethod(
			"engineGetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0,
			arg1.object()
		);
	}
	JObject KeyStoreSpi::engineGetKey(jstring arg0, jcharArray arg1)
	{
		return callObjectMethod(
			"engineGetKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0,
			arg1
		);
	}
	jboolean KeyStoreSpi::engineIsCertificateEntry(jstring arg0)
	{
		return callMethod<jboolean>(
			"engineIsCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyStoreSpi::engineIsKeyEntry(jstring arg0)
	{
		return callMethod<jboolean>(
			"engineIsKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void KeyStoreSpi::engineLoad(JObject arg0)
	{
		callMethod<void>(
			"engineLoad",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	void KeyStoreSpi::engineLoad(java::io::InputStream arg0, jcharArray arg1)
	{
		callMethod<void>(
			"engineLoad",
			"(Ljava/io/InputStream;[C)V",
			arg0.object(),
			arg1
		);
	}
	jboolean KeyStoreSpi::engineProbe(java::io::InputStream arg0)
	{
		return callMethod<jboolean>(
			"engineProbe",
			"(Ljava/io/InputStream;)Z",
			arg0.object()
		);
	}
	void KeyStoreSpi::engineSetCertificateEntry(jstring arg0, java::security::cert::Certificate arg1)
	{
		callMethod<void>(
			"engineSetCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.object()
		);
	}
	void KeyStoreSpi::engineSetEntry(jstring arg0, JObject arg1, JObject arg2)
	{
		callMethod<void>(
			"engineSetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void KeyStoreSpi::engineSetKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2)
	{
		callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void KeyStoreSpi::engineSetKeyEntry(jstring arg0, JObject arg1, jcharArray arg2, jarray arg3)
	{
		callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	jint KeyStoreSpi::engineSize()
	{
		return callMethod<jint>(
			"engineSize",
			"()I"
		);
	}
	void KeyStoreSpi::engineStore(JObject arg0)
	{
		callMethod<void>(
			"engineStore",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	void KeyStoreSpi::engineStore(java::io::OutputStream arg0, jcharArray arg1)
	{
		callMethod<void>(
			"engineStore",
			"(Ljava/io/OutputStream;[C)V",
			arg0.object(),
			arg1
		);
	}
} // namespace java::security

