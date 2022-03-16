#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./SignatureSpi.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	SignatureSpi::SignatureSpi()
		: JObject(
			"java.security.SignatureSpi",
			"()V"
		) {}
	
	// Methods
	JObject SignatureSpi::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

