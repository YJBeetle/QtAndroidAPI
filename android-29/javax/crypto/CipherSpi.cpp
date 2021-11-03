#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./CipherSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	CipherSpi::CipherSpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CipherSpi::CipherSpi()
		: JObject(
			"javax.crypto.CipherSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

