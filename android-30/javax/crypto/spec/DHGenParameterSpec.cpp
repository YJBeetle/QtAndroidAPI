#include "./DHGenParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	DHGenParameterSpec::DHGenParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DHGenParameterSpec::DHGenParameterSpec(jint arg0, jint arg1)
		: __JniBaseClass(
			"javax.crypto.spec.DHGenParameterSpec",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint DHGenParameterSpec::getExponentSize()
	{
		return callMethod<jint>(
			"getExponentSize",
			"()I"
		);
	}
	jint DHGenParameterSpec::getPrimeSize()
	{
		return callMethod<jint>(
			"getPrimeSize",
			"()I"
		);
	}
} // namespace javax::crypto::spec

