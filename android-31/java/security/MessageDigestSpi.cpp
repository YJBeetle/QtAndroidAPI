#include "../nio/ByteBuffer.hpp"
#include "./MessageDigestSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	MessageDigestSpi::MessageDigestSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MessageDigestSpi::MessageDigestSpi()
		: __JniBaseClass(
			"java.security.MessageDigestSpi",
			"()V"
		) {}
	
	// Methods
	jobject MessageDigestSpi::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::security

