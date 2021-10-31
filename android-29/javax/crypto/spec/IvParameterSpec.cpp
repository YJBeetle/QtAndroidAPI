#include "./IvParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	IvParameterSpec::IvParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IvParameterSpec::IvParameterSpec(jbyteArray arg0)
		: __JniBaseClass(
			"javax.crypto.spec.IvParameterSpec",
			"([B)V",
			arg0
		) {}
	IvParameterSpec::IvParameterSpec(jbyteArray arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"javax.crypto.spec.IvParameterSpec",
			"([BII)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jbyteArray IvParameterSpec::getIV()
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

