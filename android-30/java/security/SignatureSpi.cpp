#include "../nio/ByteBuffer.hpp"
#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./SignatureSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SignatureSpi::SignatureSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SignatureSpi::SignatureSpi()
		: __JniBaseClass(
			"java.security.SignatureSpi",
			"()V"
		) {}
	
	// Methods
	jobject SignatureSpi::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::security

