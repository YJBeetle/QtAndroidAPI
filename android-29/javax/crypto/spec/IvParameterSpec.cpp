#include "../../../JByteArray.hpp"
#include "./IvParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	IvParameterSpec::IvParameterSpec(JByteArray arg0)
		: JObject(
			"javax.crypto.spec.IvParameterSpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	IvParameterSpec::IvParameterSpec(JByteArray arg0, jint arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.IvParameterSpec",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	JByteArray IvParameterSpec::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

