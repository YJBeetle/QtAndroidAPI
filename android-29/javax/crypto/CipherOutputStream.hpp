#pragma once

#ifndef JAVAX_CRYPTO_CIPHEROUTPUTSTREAM
#define JAVAX_CRYPTO_CIPHEROUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/io/FilterOutputStream.hpp"

namespace __jni_impl::javax::crypto
{
	class Cipher;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::javax::crypto
{
	class CipherOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::javax::crypto::Cipher arg1);
		
		// Methods
		void write(jbyteArray arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void flush();
		void close();
	};
} // namespace __jni_impl::javax::crypto

#include "Cipher.hpp"
#include "../../java/io/OutputStream.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void CipherOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::javax::crypto::Cipher arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.CipherOutputStream",
			"(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void CipherOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
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
	void CipherOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CipherOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void CipherOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class CipherOutputStream : public __jni_impl::javax::crypto::CipherOutputStream
	{
	public:
		CipherOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		CipherOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::javax::crypto::Cipher arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_CIPHEROUTPUTSTREAM

