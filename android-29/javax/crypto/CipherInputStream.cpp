#include "../../java/io/InputStream.hpp"
#include "./Cipher.hpp"
#include "./CipherInputStream.hpp"

namespace javax::crypto
{
	// Fields
	
	CipherInputStream::CipherInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CipherInputStream::CipherInputStream(java::io::InputStream &arg0, javax::crypto::Cipher &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.CipherInputStream",
			"(Ljava/io/InputStream;Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint CipherInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void CipherInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean CipherInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint CipherInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CipherInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint CipherInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong CipherInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace javax::crypto

