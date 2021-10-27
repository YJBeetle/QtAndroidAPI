#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::javax::crypto
{
	class Cipher;
}

namespace __jni_impl::javax::crypto
{
	class CipherInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::javax::crypto::Cipher arg1);
		
		// Methods
		jint available();
		void close();
		jboolean markSupported();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/io/InputStream.hpp"
#include "Cipher.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void CipherInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::javax::crypto::Cipher arg1)
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
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class CipherInputStream : public __jni_impl::javax::crypto::CipherInputStream
	{
	public:
		CipherInputStream(QAndroidJniObject obj) { __thiz = obj; }
		CipherInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::javax::crypto::Cipher arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::crypto

