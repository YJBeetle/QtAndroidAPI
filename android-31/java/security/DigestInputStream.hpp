#pragma once

#include "../../JByteArray.hpp"
#include "../io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "./MessageDigest.def.hpp"
#include "./DigestInputStream.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline DigestInputStream::DigestInputStream(java::io::InputStream arg0, java::security::MessageDigest arg1)
		: java::io::FilterInputStream(
			"java.security.DigestInputStream",
			"(Ljava/io/InputStream;Ljava/security/MessageDigest;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::security::MessageDigest DigestInputStream::getMessageDigest() const
	{
		return callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
		);
	}
	inline void DigestInputStream::on(jboolean arg0) const
	{
		callMethod<void>(
			"on",
			"(Z)V",
			arg0
		);
	}
	inline jint DigestInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint DigestInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void DigestInputStream::setMessageDigest(java::security::MessageDigest arg0) const
	{
		callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.object()
		);
	}
	inline JString DigestInputStream::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers
#include "../io/InputStream.hpp"
#include "../io/FilterInputStream.hpp"

