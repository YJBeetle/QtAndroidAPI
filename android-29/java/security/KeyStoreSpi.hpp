#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::security::cert
{
	class Certificate;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::security
{
	class KeyStoreSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject engineAliases();
		jboolean engineContainsAlias(jstring arg0);
		jboolean engineContainsAlias(const QString &arg0);
		void engineDeleteEntry(jstring arg0);
		void engineDeleteEntry(const QString &arg0);
		jboolean engineEntryInstanceOf(jstring arg0, jclass arg1);
		jboolean engineEntryInstanceOf(const QString &arg0, jclass arg1);
		QAndroidJniObject engineGetCertificate(jstring arg0);
		QAndroidJniObject engineGetCertificate(const QString &arg0);
		jstring engineGetCertificateAlias(__jni_impl::java::security::cert::Certificate arg0);
		jarray engineGetCertificateChain(jstring arg0);
		jarray engineGetCertificateChain(const QString &arg0);
		QAndroidJniObject engineGetCreationDate(jstring arg0);
		QAndroidJniObject engineGetCreationDate(const QString &arg0);
		QAndroidJniObject engineGetEntry(jstring arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject engineGetEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject engineGetKey(jstring arg0, jcharArray arg1);
		QAndroidJniObject engineGetKey(const QString &arg0, jcharArray arg1);
		jboolean engineIsCertificateEntry(jstring arg0);
		jboolean engineIsCertificateEntry(const QString &arg0);
		jboolean engineIsKeyEntry(jstring arg0);
		jboolean engineIsKeyEntry(const QString &arg0);
		void engineLoad(__jni_impl::__JniBaseClass arg0);
		void engineLoad(__jni_impl::java::io::InputStream arg0, jcharArray arg1);
		jboolean engineProbe(__jni_impl::java::io::InputStream arg0);
		void engineSetCertificateEntry(jstring arg0, __jni_impl::java::security::cert::Certificate arg1);
		void engineSetCertificateEntry(const QString &arg0, __jni_impl::java::security::cert::Certificate arg1);
		void engineSetEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void engineSetEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void engineSetKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2);
		void engineSetKeyEntry(const QString &arg0, jbyteArray arg1, jarray arg2);
		void engineSetKeyEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3);
		void engineSetKeyEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3);
		jint engineSize();
		void engineStore(__jni_impl::__JniBaseClass arg0);
		void engineStore(__jni_impl::java::io::OutputStream arg0, jcharArray arg1);
	};
} // namespace __jni_impl::java::security

#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "cert/Certificate.hpp"
#include "../util/Date.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStoreSpi::__constructor()
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
	jboolean KeyStoreSpi::engineContainsAlias(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineContainsAlias",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void KeyStoreSpi::engineDeleteEntry(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"engineDeleteEntry",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean KeyStoreSpi::engineEntryInstanceOf(const QString &arg0, jclass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"engineEntryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	QAndroidJniObject KeyStoreSpi::engineGetCertificate(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring KeyStoreSpi::engineGetCertificateAlias(__jni_impl::java::security::cert::Certificate arg0)
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
	jarray KeyStoreSpi::engineGetCertificateChain(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject KeyStoreSpi::engineGetCreationDate(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject KeyStoreSpi::engineGetEntry(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"engineGetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStoreSpi::engineGetEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"engineGetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	QAndroidJniObject KeyStoreSpi::engineGetKey(const QString &arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"engineGetKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	jboolean KeyStoreSpi::engineIsCertificateEntry(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineIsCertificateEntry",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean KeyStoreSpi::engineIsKeyEntry(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineIsKeyEntry",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyStoreSpi::engineLoad(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"engineLoad",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineLoad(__jni_impl::java::io::InputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"engineLoad",
			"(Ljava/io/InputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean KeyStoreSpi::engineProbe(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callMethod<jboolean>(
			"engineProbe",
			"(Ljava/io/InputStream;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineSetCertificateEntry(jstring arg0, __jni_impl::java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"engineSetCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineSetCertificateEntry(const QString &arg0, __jni_impl::java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"engineSetCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineSetEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"engineSetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineSetEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"engineSetEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void KeyStoreSpi::engineSetKeyEntry(const QString &arg0, jbyteArray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void KeyStoreSpi::engineSetKeyEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3)
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
	void KeyStoreSpi::engineSetKeyEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"engineSetKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void KeyStoreSpi::engineStore(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"engineStore",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStoreSpi::engineStore(__jni_impl::java::io::OutputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"engineStore",
			"(Ljava/io/OutputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStoreSpi : public __jni_impl::java::security::KeyStoreSpi
	{
	public:
		KeyStoreSpi(QAndroidJniObject obj) { __thiz = obj; }
		KeyStoreSpi()
		{
			__constructor();
		}
	};
} // namespace java::security

