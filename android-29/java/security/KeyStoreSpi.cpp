#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "./cert/Certificate.hpp"
#include "../util/Date.hpp"
#include "./KeyStoreSpi.hpp"

namespace java::security
{
	// Fields
	
	KeyStoreSpi::KeyStoreSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStoreSpi::KeyStoreSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreSpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject KeyStoreSpi::engineAliases()
	{
		return __thiz.callObjectMethod(
			"engineAliases",
			"()Ljava/util/Enumeration;"
		);
	}
	jboolean KeyStoreSpi::engineContainsAlias(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineContainsAlias",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void KeyStoreSpi::engineDeleteEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"engineDeleteEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean KeyStoreSpi::engineEntryInstanceOf(jstring arg0, jclass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"engineEntryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyStoreSpi::engineGetCertificate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0
		);
	}
	jstring KeyStoreSpi::engineGetCertificateAlias(java::security::cert::Certificate arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jarray KeyStoreSpi::engineGetCertificateChain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject KeyStoreSpi::engineGetCreationDate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	QAndroidJniObject KeyStoreSpi::engineGetEntry(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"engineGetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStoreSpi::engineGetKey(jstring arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"engineGetKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0,
			arg1
		);
	}
	jboolean KeyStoreSpi::engineIsCertificateEntry(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineIsCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyStoreSpi::engineIsKeyEntry(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineIsKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void KeyStoreSpi::engineLoad(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"engineLoad",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineLoad(java::io::InputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"engineLoad",
			"(Ljava/io/InputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean KeyStoreSpi::engineProbe(java::io::InputStream arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineProbe",
			"(Ljava/io/InputStream;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineSetCertificateEntry(jstring arg0, java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"engineSetCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineSetEntry(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"engineSetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineSetKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void KeyStoreSpi::engineSetKeyEntry(jstring arg0, __JniBaseClass arg1, jcharArray arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint KeyStoreSpi::engineSize()
	{
		return __thiz.callMethod<jint>(
			"engineSize",
			"()I"
		);
	}
	void KeyStoreSpi::engineStore(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"engineStore",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineStore(java::io::OutputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"engineStore",
			"(Ljava/io/OutputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace java::security

