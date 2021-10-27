#include "../nio/ByteBuffer.hpp"
#include "./MessageDigestSpi.hpp"

namespace java::security
{
	// Fields
	
	MessageDigestSpi::MessageDigestSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MessageDigestSpi::MessageDigestSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.MessageDigestSpi",
			"()V"
		);
	}
	
	// Methods
	jobject MessageDigestSpi::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::security

