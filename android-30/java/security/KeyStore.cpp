#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JArray.hpp"
#include "../io/File.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./KeyStoreSpi.hpp"
#include "./Provider.hpp"
#include "./cert/Certificate.hpp"
#include "../util/Date.hpp"
#include "./KeyStore.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	JString KeyStore::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		);
	}
	java::security::KeyStore KeyStore::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0.object<jstring>()
		);
	}
	java::security::KeyStore KeyStore::getInstance(java::io::File arg0, JCharArray arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/io/File;[C)Ljava/security/KeyStore;",
			arg0.object(),
			arg1.object<jcharArray>()
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
	java::security::KeyStore KeyStore::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::security::KeyStore KeyStore::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject KeyStore::aliases() const
	{
		return callObjectMethod(
			"aliases",
			"()Ljava/util/Enumeration;"
		);
	}
	jboolean KeyStore::containsAlias(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsAlias",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void KeyStore::deleteEntry(JString arg0) const
	{
		callMethod<void>(
			"deleteEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean KeyStore::entryInstanceOf(JString arg0, JClass arg1) const
	{
		return callMethod<jboolean>(
			"entryInstanceOf",
			"(Ljava/lang/String;Ljava/lang/Class;)Z",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		);
	}
	java::security::cert::Certificate KeyStore::getCertificate(JString arg0) const
	{
		return callObjectMethod(
			"getCertificate",
			"(Ljava/lang/String;)Ljava/security/cert/Certificate;",
			arg0.object<jstring>()
		);
	}
	JString KeyStore::getCertificateAlias(java::security::cert::Certificate arg0) const
	{
		return callObjectMethod(
			"getCertificateAlias",
			"(Ljava/security/cert/Certificate;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JArray KeyStore::getCertificateChain(JString arg0) const
	{
		return callObjectMethod(
			"getCertificateChain",
			"(Ljava/lang/String;)[Ljava/security/cert/Certificate;",
			arg0.object<jstring>()
		);
	}
	java::util::Date KeyStore::getCreationDate(JString arg0) const
	{
		return callObjectMethod(
			"getCreationDate",
			"(Ljava/lang/String;)Ljava/util/Date;",
			arg0.object<jstring>()
		);
	}
	JObject KeyStore::getEntry(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject KeyStore::getKey(JString arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"getKey",
			"(Ljava/lang/String;[C)Ljava/security/Key;",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		);
	}
	java::security::Provider KeyStore::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JString KeyStore::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jboolean KeyStore::isCertificateEntry(JString arg0) const
	{
		return callMethod<jboolean>(
			"isCertificateEntry",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean KeyStore::isKeyEntry(JString arg0) const
	{
		return callMethod<jboolean>(
			"isKeyEntry",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void KeyStore::load(JObject arg0) const
	{
		callMethod<void>(
			"load",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	void KeyStore::load(java::io::InputStream arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;[C)V",
			arg0.object(),
			arg1.object<jcharArray>()
		);
	}
	void KeyStore::setCertificateEntry(JString arg0, java::security::cert::Certificate arg1) const
	{
		callMethod<void>(
			"setCertificateEntry",
			"(Ljava/lang/String;Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void KeyStore::setEntry(JString arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"setEntry",
			"(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void KeyStore::setKeyEntry(JString arg0, JByteArray arg1, JArray arg2) const
	{
		callMethod<void>(
			"setKeyEntry",
			"(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2.object<jarray>()
		);
	}
	void KeyStore::setKeyEntry(JString arg0, JObject arg1, JCharArray arg2, JArray arg3) const
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
	jint KeyStore::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void KeyStore::store(JObject arg0) const
	{
		callMethod<void>(
			"store",
			"(Ljava/security/KeyStore$LoadStoreParameter;)V",
			arg0.object()
		);
	}
	void KeyStore::store(java::io::OutputStream arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"store",
			"(Ljava/io/OutputStream;[C)V",
			arg0.object(),
			arg1.object<jcharArray>()
		);
	}
} // namespace java::security

