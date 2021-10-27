#include "../../java/io/OutputStream.hpp"
#include "./Cipher.hpp"
#include "./CipherOutputStream.hpp"

namespace javax::crypto
{
	// Fields
	
	CipherOutputStream::CipherOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CipherOutputStream::CipherOutputStream(java::io::OutputStream &arg0, javax::crypto::Cipher &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.CipherOutputStream",
			"(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void CipherOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void CipherOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void CipherOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void CipherOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CipherOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace javax::crypto

