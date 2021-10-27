#pragma once

#include "../../__JniBaseClass.hpp"
#include "../io/InputStream.hpp"
#include "../io/FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::security
{
	class MessageDigest;
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
		QAndroidJniObject getMessageDigest();
		void on(jboolean arg0);
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		void setMessageDigest(__jni_impl::java::security::MessageDigest arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "../io/InputStream.hpp"
#include "MessageDigest.hpp"

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
	QAndroidJniObject DigestInputStream::getMessageDigest()
	{
		return __thiz.callObjectMethod(
			"getMessageDigest",
			"()Ljava/security/MessageDigest;"
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
	void DigestInputStream::setMessageDigest(__jni_impl::java::security::MessageDigest arg0)
	{
		__thiz.callMethod<void>(
			"setMessageDigest",
			"(Ljava/security/MessageDigest;)V",
			arg0.__jniObject().object()
		);
	}
	jstring DigestInputStream::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

