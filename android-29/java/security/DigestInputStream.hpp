#pragma once

#ifndef JAVA_SECURITY_DIGESTINPUTSTREAM
#define JAVA_SECURITY_DIGESTINPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "../io/InputStream.hpp"
#include "../io/FilterInputStream.hpp"

namespace __jni_impl::java::security
{
	class MessageDigest;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::security
{
	class DigestInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::security::MessageDigest arg1);
		
		// Methods
		jstring toString();
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void on(jboolean arg0);
		void setMessageDigest(__jni_impl::java::security::MessageDigest arg0);
		QAndroidJniObject getMessageDigest();
	};
} // namespace __jni_impl::java::security

#include "MessageDigest.hpp"
#include "../io/InputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void DigestInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::java::security::MessageDigest arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestInputStream",
			"(Ljava/io/InputStream;Ljava/security/MessageDigest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring DigestInputStream::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DigestInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint DigestInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void DigestInputStream::on(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"on",
			"(Z)V",
			arg0
		);
	}
	void DigestInputStream::setMessageDigest(__jni_impl::java::security::MessageDigest arg0)
	{
		__thiz.callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DigestInputStream::getMessageDigest()
	{
		return __thiz.callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class DigestInputStream : public __jni_impl::java::security::DigestInputStream
	{
	public:
		DigestInputStream(QAndroidJniObject obj) { __thiz = obj; }
		DigestInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::java::security::MessageDigest arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_DIGESTINPUTSTREAM

