#include "../nio/ByteBuffer.hpp"
#include "./MessageDigestSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	MessageDigestSpi::MessageDigestSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MessageDigestSpi::MessageDigestSpi()
		: JObject(
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

