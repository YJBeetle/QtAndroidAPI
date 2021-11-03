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
	
	// QJniObject forward
	SignatureSpi::SignatureSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SignatureSpi::SignatureSpi()
		: JObject(
			"java.security.SignatureSpi",
			"()V"
		) {}
	
	// Methods
	JObject SignatureSpi::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

