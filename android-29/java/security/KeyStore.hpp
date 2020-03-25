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
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::security::cert
{
	class Certificate;
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
		static QAndroidJniObject getInstance(__jni_impl::java::io::File arg0, jcharArray arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		void load(__jni_impl::java::io::InputStream arg0, jcharArray arg1);
		void load(__jni_impl::__JniBaseClass arg0);
		void store(__jni_impl::java::io::OutputStream arg0, jcharArray arg1);
		void store(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getType();
		QAndroidJniObject aliases();
		QAndroidJniObject getEntry(jstring arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getProvider();
		void deleteEntry(jstring arg0);
		QAndroidJniObject getCreationDate(jstring arg0);
		void setKeyEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3);
		void setKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2);
		void setCertificateEntry(jstring arg0, __jni_impl::java::security::cert::Certificate arg1);
		jboolean containsAlias(jstring arg0);
		jboolean isKeyEntry(jstring arg0);
		jboolean isCertificateEntry(jstring arg0);
		QAndroidJniObject getCertificateAlias(__jni_impl::java::security::cert::Certificate arg0);
		jboolean entryInstanceOf(jstring arg0, jclass arg1);
		QAndroidJniObject getCertificateChain(jstring arg0);
		QAndroidJniObject getCertificate(jstring arg0);
		static QAndroidJniObject getDefaultType();
		void setEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "KeyStoreSpi.hpp"
#include "../io/File.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../util/Date.hpp"
#include "cert/Certificate.hpp"

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
			"()I");
	}
	QAndroidJniObject KeyStore::getKey(jstring arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"getKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0,
			arg1);
	}
	QAndroidJniObject KeyStore::getInstance(__jni_impl::java::io::File arg0, jcharArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;[C)Ljava/security/KeyStore;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject KeyStore::getInstance(__jni_impl::java::io::File arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$LoadStoreParameter;)Ljava/security/KeyStore;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject KeyStore::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0,
			arg1);
	}
	QAndroidJniObject KeyStore::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject KeyStore::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0);
	}
	void KeyStore::load(__jni_impl::java::io::InputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;[C)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void KeyStore::load(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object());
	}
	void KeyStore::store(__jni_impl::java::io::OutputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;[C)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void KeyStore::store(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject KeyStore::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject KeyStore::aliases()
	{
		return __thiz.callObjectMethod(
			"aliases",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject KeyStore::getEntry(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject KeyStore::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;");
	}
	void KeyStore::deleteEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteEntry",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject KeyStore::getCreationDate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0);
	}
	void KeyStore::setKeyEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, jcharArray arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void KeyStore::setKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2);
	}
	void KeyStore::setCertificateEntry(jstring arg0, __jni_impl::java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"setCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean KeyStore::containsAlias(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAlias",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean KeyStore::isKeyEntry(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean KeyStore::isCertificateEntry(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject KeyStore::getCertificateAlias(__jni_impl::java::security::cert::Certificate arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	jboolean KeyStore::entryInstanceOf(jstring arg0, jclass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"entryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject KeyStore::getCertificateChain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0);
	}
	QAndroidJniObject KeyStore::getCertificate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0);
	}
	QAndroidJniObject KeyStore::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getDefaultType",
			"()Ljava/lang/String;");
	}
	void KeyStore::setEntry(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
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

