#include "../nio/ByteBuffer.hpp"
#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./SignatureSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	SignatureSpi::SignatureSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SignatureSpi::SignatureSpi()
		: JObject(
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

