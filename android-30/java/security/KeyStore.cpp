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
	
	// QJniObject forward
	KeyStore::KeyStore(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring KeyStore::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::KeyStore KeyStore::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0
		);
	}
	java::security::KeyStore KeyStore::getInstance(java::io::File arg0, jcharArray arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;[C)Ljava/security/KeyStore;",
			arg0.object(),
			arg1
		);
	}
	java::security::KeyStore KeyStore::getInstance(java::io::File arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;Ljava/security/KeyStore$LoadStoreParameter;)Ljava/security/KeyStore;",
			arg0.object(),
			arg1.object()
		);
	}
	java::security::KeyStore KeyStore::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0,
			arg1
		);
	}
	java::security::KeyStore KeyStore::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;",
			arg0,
			arg1.object()
		);
	}
	JObject KeyStore::aliases()
	{
		return callObjectMethod(
			"aliases",
			"()Ljava/util/Enumeration;"
		);
	}
	jboolean KeyStore::containsAlias(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsAlias",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void KeyStore::deleteEntry(jstring arg0)
	{
		callMethod<void>(
			"deleteEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean KeyStore::entryInstanceOf(jstring arg0, jclass arg1)
	{
		return callMethod<jboolean>(
			"entryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0,
			arg1
		);
	}
	java::security::cert::Certificate KeyStore::getCertificate(jstring arg0)
	{
		return callObjectMethod(
			"getCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0
		);
	}
	jstring KeyStore::getCertificateAlias(java::security::cert::Certificate arg0)
	{
		return callObjectMethod(
			"getCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jarray KeyStore::getCertificateChain(jstring arg0)
	{
		return callObjectMethod(
			"getCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0
		).object<jarray>();
	}
	java::util::Date KeyStore::getCreationDate(jstring arg0)
	{
		return callObjectMethod(
			"getCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0
		);
	}
	JObject KeyStore::getEntry(jstring arg0, JObject arg1)
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0,
			arg1.object()
		);
	}
	JObject KeyStore::getKey(jstring arg0, jcharArray arg1)
	{
		return callObjectMethod(
			"getKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0,
			arg1
		);
	}
	java::security::Provider KeyStore::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring KeyStore::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean KeyStore::isCertificateEntry(jstring arg0)
	{
		return callMethod<jboolean>(
			"isCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean KeyStore::isKeyEntry(jstring arg0)
	{
		return callMethod<jboolean>(
			"isKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void KeyStore::load(JObject arg0)
	{
		callMethod<void>(
			"load",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	void KeyStore::load(java::io::InputStream arg0, jcharArray arg1)
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;[C)V",
			arg0.object(),
			arg1
		);
	}
	void KeyStore::setCertificateEntry(jstring arg0, java::security::cert::Certificate arg1)
	{
		callMethod<void>(
			"setCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.object()
		);
	}
	void KeyStore::setEntry(jstring arg0, JObject arg1, JObject arg2)
	{
		callMethod<void>(
			"setEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void KeyStore::setKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2)
	{
		callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void KeyStore::setKeyEntry(jstring arg0, JObject arg1, jcharArray arg2, jarray arg3)
	{
		callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	jint KeyStore::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void KeyStore::store(JObject arg0)
	{
		callMethod<void>(
			"store",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	void KeyStore::store(java::io::OutputStream arg0, jcharArray arg1)
	{
		callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;[C)V",
			arg0.object(),
			arg1
		);
	}
} // namespace java::security

