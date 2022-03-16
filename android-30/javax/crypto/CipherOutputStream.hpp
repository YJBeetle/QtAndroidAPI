#pragma once

#include "../../JByteArray.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "./Cipher.def.hpp"
#include "./CipherOutputStream.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline CipherOutputStream::CipherOutputStream(java::io::OutputStream arg0, javax::crypto::Cipher arg1)
		: java::io::FilterOutputStream(
			"javax.crypto.CipherOutputStream",
			"(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void CipherOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void CipherOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void CipherOutputStream::write(JByteArray arg0) const
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void CipherOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void CipherOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace javax::crypto

// Base class headers
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FilterOutputStream.hpp"

