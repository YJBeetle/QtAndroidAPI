#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./CipherSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	CipherSpi::CipherSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CipherSpi::CipherSpi()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.CipherSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::crypto

