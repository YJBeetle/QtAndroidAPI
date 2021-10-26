#pragma once

#ifndef JAVA_SECURITY_KEYSTORE
#define JAVA_SECURITY_KEYSTORE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class KeyStoreSpi;
}
namespace __jni_impl::java::io
{
	class File;
}
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
	class KeyStore : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint size();
		QAndroidJniObject getKey(jstring arg0, jcharArray arg1);
		QAndroidJniObject getKey(const QString &arg0, jcharArray arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::io::File arg0, jcharArray arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		void load(__jni_impl::java::io::InputStream arg0, jcharArray arg1);
		void load(__jni_impl::__JniBaseClass arg0);
		void store(__jni_impl::java::io::OutputStream arg0, jcharArray arg1);
		void store(__jni_impl::__JniBaseClass arg0);
		jstring getType();
		QAndroidJniObject aliases();
		QAndroidJniObject getEntry(jstring arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getProvider();
		void deleteEntry(jstring arg0);
		void deleteEntry(const QString &arg0);
		jarray getCertificateChain(jstring arg0);
		jarray getCertificateChain(const QString &arg0);
		QAndroidJniObject getCertificate(jstring arg0);
		QAndroidJniObject getCertificate(const QString &arg0);
		QAndroidJniObject getCreationDate(jstring arg0);
		QAndroidJniObject getCreationDate(const QString &arg0);
		void setKeyEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3);
		void setKeyEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3);
		void setKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2);
		void setKeyEntry(const QString &arg0, jbyteArray arg1, jarray arg2);
		void setCertificateEntry(jstring arg0, __jni_impl::java::security::cert::Certificate arg1);
		void setCertificateEntry(const QString &arg0, __jni_impl::java::security::cert::Certificate arg1);
		jboolean containsAlias(jstring arg0);
		jboolean containsAlias(const QString &arg0);
		jboolean isKeyEntry(jstring arg0);
		jboolean isKeyEntry(const QString &arg0);
		jboolean isCertificateEntry(jstring arg0);
		jboolean isCertificateEntry(const QString &arg0);
		jstring getCertificateAlias(__jni_impl::java::security::cert::Certificate arg0);
		jboolean entryInstanceOf(jstring arg0, jclass arg1);
		jboolean entryInstanceOf(const QString &arg0, jclass arg1);
		void setEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void setEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static jstring getDefaultType();
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "KeyStoreSpi.hpp"
#include "../io/File.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "cert/Certificate.hpp"
#include "../util/Date.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyStore::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore",
			"(V)V");
	}
	
	// Methods
	jint KeyStore::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject KeyStore::getKey(jstring arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"getKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyStore::getKey(const QString &arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"getKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject KeyStore::getInstance(__jni_impl::java::io::File arg0, jcharArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;[C)Ljava/security/KeyStore;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject KeyStore::getInstance(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$LoadStoreParameter;)Ljava/security/KeyStore;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyStore::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject KeyStore::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0
		);
	}
	QAndroidJniObject KeyStore::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyStore;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyStore::load(__jni_impl::java::io::InputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void KeyStore::load(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStore::store(__jni_impl::java::io::OutputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void KeyStore::store(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	jstring KeyStore::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyStore::aliases()
	{
		return __thiz.callObjectMethod(
			"aliases",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject KeyStore::getEntry(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore::getEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyStore::deleteEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void KeyStore::deleteEntry(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"deleteEntry",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray KeyStore::getCertificateChain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0
		).object<jarray>();
	}
	jarray KeyStore::getCertificateChain(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject KeyStore::getCertificate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0
		);
	}
	QAndroidJniObject KeyStore::getCertificate(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject KeyStore::getCreationDate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	QAndroidJniObject KeyStore::getCreationDate(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyStore::setKeyEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void KeyStore::setKeyEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void KeyStore::setKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void KeyStore::setKeyEntry(const QString &arg0, jbyteArray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void KeyStore::setCertificateEntry(jstring arg0, __jni_impl::java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"setCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyStore::setCertificateEntry(const QString &arg0, __jni_impl::java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"setCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean KeyStore::containsAlias(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAlias",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyStore::containsAlias(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAlias",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean KeyStore::isKeyEntry(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyStore::isKeyEntry(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isKeyEntry",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean KeyStore::isCertificateEntry(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyStore::isCertificateEntry(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCertificateEntry",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring KeyStore::getCertificateAlias(__jni_impl::java::security::cert::Certificate arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean KeyStore::entryInstanceOf(jstring arg0, jclass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"entryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0,
			arg1
		);
	}
	jboolean KeyStore::entryInstanceOf(const QString &arg0, jclass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"entryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void KeyStore::setEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void KeyStore::setEntry(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring KeyStore::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStore : public __jni_impl::java::security::KeyStore
	{
	public:
		KeyStore(QAndroidJniObject obj) { __thiz = obj; }
		KeyStore()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYSTORE

