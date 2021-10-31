#include "./DHGenParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	DHGenParameterSpec::DHGenParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DHGenParameterSpec::DHGenParameterSpec(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHGenParameterSpec",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint DHGenParameterSpec::getExponentSize()
	{
		return __thiz.callMethod<jint>(
			"getExponentSize",
			"()I"
		);
	}
	jint DHGenParameterSpec::getPrimeSize()
	{
		return __thiz.callMethod<jint>(
			"getPrimeSize",
			"()I"
		);
	}
} // namespace javax::crypto::spec

