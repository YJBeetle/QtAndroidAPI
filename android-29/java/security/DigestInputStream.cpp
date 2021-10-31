#include "../io/InputStream.hpp"
#include "./MessageDigest.hpp"
#include "./DigestInputStream.hpp"

namespace java::security
{
	// Fields
	
	DigestInputStream::DigestInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DigestInputStream::DigestInputStream(java::io::InputStream arg0, java::security::MessageDigest arg1)
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
	void DigestInputStream::setMessageDigest(java::security::MessageDigest arg0)
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
} // namespace java::security

