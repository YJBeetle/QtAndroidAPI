#include "../../java/nio/ByteBuffer.hpp"
#include "./MacSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	MacSpi::MacSpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MacSpi::MacSpi()
		: __JniBaseClass(
			"javax.crypto.MacSpi",
			"()V"
		) {}
	
	// Methods
	jobject MacSpi::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace javax::crypto

