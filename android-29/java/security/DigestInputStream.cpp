#include "../io/InputStream.hpp"
#include "./MessageDigest.hpp"
#include "./DigestInputStream.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	DigestInputStream::DigestInputStream(QJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	DigestInputStream::DigestInputStream(java::io::InputStream arg0, java::security::MessageDigest arg1)
		: java::io::FilterInputStream(
			"java.security.DigestInputStream",
			"(Ljava/io/InputStream;Ljava/security/MessageDigest;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::security::MessageDigest DigestInputStream::getMessageDigest()
	{
		return callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
		);
	}
	void DigestInputStream::on(jboolean arg0)
	{
		callMethod<void>(
			"on",
			"(Z)V",
			arg0
		);
	}
	jint DigestInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint DigestInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void DigestInputStream::setMessageDigest(java::security::MessageDigest arg0)
	{
		callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.object()
		);
	}
	jstring DigestInputStream::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

