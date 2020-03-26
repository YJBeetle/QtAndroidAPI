#pragma once

#ifndef JAVA_SECURITY_DIGESTOUTPUTSTREAM
#define JAVA_SECURITY_DIGESTOUTPUTSTREAM

#include "../../__JniBaseClass.hpp"
#include "../io/OutputStream.hpp"
#include "../io/FilterOutputStream.hpp"

namespace __jni_impl::java::security
{
	class MessageDigest;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::security
{
	class DigestOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::security::MessageDigest arg1);
		
		// Methods
		jstring toString();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void on(jboolean arg0);
		void setMessageDigest(__jni_impl::java::security::MessageDigest arg0);
		QAndroidJniObject getMessageDigest();
	};
} // namespace __jni_impl::java::security

#include "MessageDigest.hpp"
#include "../io/OutputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void DigestOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::security::MessageDigest arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestOutputStream",
			"(Ljava/io/OutputStream;Ljava/security/MessageDigest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring DigestOutputStream::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DigestOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void DigestOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DigestOutputStream::on(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"on",
			"(Z)V",
			arg0
		);
	}
	void DigestOutputStream::setMessageDigest(__jni_impl::java::security::MessageDigest arg0)
	{
		__thiz.callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DigestOutputStream::getMessageDigest()
	{
		return __thiz.callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class DigestOutputStream : public __jni_impl::java::security::DigestOutputStream
	{
	public:
		DigestOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		DigestOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::security::MessageDigest arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_DIGESTOUTPUTSTREAM

