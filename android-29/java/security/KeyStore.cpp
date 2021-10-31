#include "../io/File.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "./KeyStoreSpi.hpp"
#include "./Provider.hpp"
#include "./cert/Certificate.hpp"
#include "../util/Date.hpp"
#include "./KeyStore.hpp"

namespace java::security
{
	// Fields
	
	KeyStore::KeyStore(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring KeyStore::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	QAndroidJniObject KeyStore::getInstance(java::io::File arg0, jcharArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;[C)Ljava/security/KeyStore;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject KeyStore::getInstance(java::io::File arg0, __JniBaseClass arg1)
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
	QAndroidJniObject KeyStore::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyStore::aliases()
	{
		return __thiz.callObjectMethod(
			"aliases",
			"()Ljava/util/Enumeration;"
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
	void KeyStore::deleteEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
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
	QAndroidJniObject KeyStore::getCertificate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0
		);
	}
	jstring KeyStore::getCertificateAlias(java::security::cert::Certificate arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jarray KeyStore::getCertificateChain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject KeyStore::getCreationDate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	QAndroidJniObject KeyStore::getEntry(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject KeyStore::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring KeyStore::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean KeyStore::isCertificateEntry(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0
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
	void KeyStore::load(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStore::load(java::io::InputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void KeyStore::setCertificateEntry(jstring arg0, java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"setCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyStore::setEntry(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
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
	void KeyStore::setKeyEntry(jstring arg0, __JniBaseClass arg1, jcharArray arg2, jarray arg3)
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
	jint KeyStore::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void KeyStore::store(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyStore::store(java::io::OutputStream arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;[C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace java::security

