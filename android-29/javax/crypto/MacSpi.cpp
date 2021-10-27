#include "../../java/nio/ByteBuffer.hpp"
#include "./MacSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	MacSpi::MacSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MacSpi::MacSpi()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.MacSpi",
			"()V"
		);
	}
	
	// Methods
	jobject MacSpi::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace javax::crypto

