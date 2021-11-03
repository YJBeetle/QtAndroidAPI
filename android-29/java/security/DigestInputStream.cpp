#include "../../JByteArray.hpp"
#include "../io/InputStream.hpp"
#include "../../JString.hpp"
#include "./MessageDigest.hpp"
#include "./DigestInputStream.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	DigestInputStream::DigestInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	DigestInputStream::DigestInputStream(java::io::InputStream arg0, java::security::MessageDigest arg1)
		: java::io::FilterInputStream(
			"java.security.DigestInputStream",
			"(Ljava/io/InputStream;Ljava/security/MessageDigest;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::security::MessageDigest DigestInputStream::getMessageDigest() const
	{
		return callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
		);
	}
	void DigestInputStream::on(jboolean arg0) const
	{
		callMethod<void>(
			"on",
			"(Z)V",
			arg0
		);
	}
	jint DigestInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint DigestInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void DigestInputStream::setMessageDigest(java::security::MessageDigest arg0) const
	{
		callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.object()
		);
	}
	JString DigestInputStream::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

