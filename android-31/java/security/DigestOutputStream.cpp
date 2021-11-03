#include "../../JByteArray.hpp"
#include "../io/OutputStream.hpp"
#include "../../JString.hpp"
#include "./MessageDigest.hpp"
#include "./DigestOutputStream.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	DigestOutputStream::DigestOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	DigestOutputStream::DigestOutputStream(java::io::OutputStream arg0, java::security::MessageDigest arg1)
		: java::io::FilterOutputStream(
			"java.security.DigestOutputStream",
			"(Ljava/io/OutputStream;Ljava/security/MessageDigest;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::security::MessageDigest DigestOutputStream::getMessageDigest() const
	{
		return callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
		);
	}
	void DigestOutputStream::on(jboolean arg0) const
	{
		callMethod<void>(
			"on",
			"(Z)V",
			arg0
		);
	}
	void DigestOutputStream::setMessageDigest(java::security::MessageDigest arg0) const
	{
		callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.object()
		);
	}
	JString DigestOutputStream::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DigestOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void DigestOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::security

