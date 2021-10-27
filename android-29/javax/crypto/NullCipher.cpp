#include "./NullCipher.hpp"

namespace javax::crypto
{
	// Fields
	
	NullCipher::NullCipher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NullCipher::NullCipher()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.NullCipher",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::crypto

