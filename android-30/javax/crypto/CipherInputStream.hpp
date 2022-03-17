#pragma once

#include "../../JByteArray.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "./Cipher.def.hpp"
#include "./CipherInputStream.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline CipherInputStream::CipherInputStream(java::io::InputStream arg0, javax::crypto::Cipher arg1)
		: java::io::FilterInputStream(
			"javax.crypto.CipherInputStream",
			"(Ljava/io/InputStream;Ljavax/crypto/Cipher;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint CipherInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void CipherInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean CipherInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint CipherInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint CipherInputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint CipherInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jlong CipherInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace javax::crypto

// Base class headers
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FilterInputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif
