#include "../../java/io/InputStream.hpp"
#include "./Cipher.hpp"
#include "./CipherInputStream.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	CipherInputStream::CipherInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	CipherInputStream::CipherInputStream(java::io::InputStream arg0, javax::crypto::Cipher arg1)
		: java::io::FilterInputStream(
			"javax.crypto.CipherInputStream",
			"(Ljava/io/InputStream;Ljavax/crypto/Cipher;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint CipherInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void CipherInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean CipherInputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint CipherInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CipherInputStream::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint CipherInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong CipherInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace javax::crypto
