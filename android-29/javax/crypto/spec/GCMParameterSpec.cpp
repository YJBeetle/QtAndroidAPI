#include "./GCMParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	GCMParameterSpec::GCMParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GCMParameterSpec::GCMParameterSpec(jint arg0, jbyteArray arg1)
		: __JniBaseClass(
			"javax.crypto.spec.GCMParameterSpec",
			"(I[B)V",
			arg0,
			arg1
		) {}
	GCMParameterSpec::GCMParameterSpec(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"javax.crypto.spec.GCMParameterSpec",
			"(I[BII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jbyteArray GCMParameterSpec::getIV()
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
	jint GCMParameterSpec::getTLen()
	{
		return callMethod<jint>(
			"getTLen",
			"()I"
		);
	}
} // namespace javax::crypto::spec

