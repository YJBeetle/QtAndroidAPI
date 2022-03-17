#pragma once

#include "../../JByteArray.hpp"
#include "../io/OutputStream.def.hpp"
#include "../../JString.hpp"
#include "./MessageDigest.def.hpp"
#include "./DigestOutputStream.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline DigestOutputStream::DigestOutputStream(java::io::OutputStream arg0, java::security::MessageDigest arg1)
		: java::io::FilterOutputStream(
			"java.security.DigestOutputStream",
			"(Ljava/io/OutputStream;Ljava/security/MessageDigest;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::security::MessageDigest DigestOutputStream::getMessageDigest() const
	{
		return callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
		);
	}
	inline void DigestOutputStream::on(jboolean arg0) const
	{
		callMethod<void>(
			"on",
			"(Z)V",
			arg0
		);
	}
	inline void DigestOutputStream::setMessageDigest(java::security::MessageDigest arg0) const
	{
		callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.object()
		);
	}
	inline JString DigestOutputStream::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DigestOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void DigestOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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

// Base class headers
#include "../io/OutputStream.hpp"
#include "../io/FilterOutputStream.hpp"

