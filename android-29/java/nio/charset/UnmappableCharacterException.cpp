#include "./UnmappableCharacterException.hpp"

namespace java::nio::charset
{
	// Fields
	
	UnmappableCharacterException::UnmappableCharacterException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnmappableCharacterException::UnmappableCharacterException(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.UnmappableCharacterException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint UnmappableCharacterException::getInputLength()
	{
		return __thiz.callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	jstring UnmappableCharacterException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

