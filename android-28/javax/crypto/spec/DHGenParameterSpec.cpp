#include "./DHGenParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	DHGenParameterSpec::DHGenParameterSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DHGenParameterSpec::DHGenParameterSpec(jint arg0, jint arg1)
		: JObject(
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

