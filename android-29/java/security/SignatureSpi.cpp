#include "../nio/ByteBuffer.hpp"
#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./SignatureSpi.hpp"

namespace java::security
{
	// Fields
	
	SignatureSpi::SignatureSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SignatureSpi::SignatureSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureSpi",
			"()V"
		);
	}
	
	// Methods
	jobject SignatureSpi::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::security

