#include "./PBEKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	PBEKeySpec::PBEKeySpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PBEKeySpec::PBEKeySpec(jcharArray arg0)
		: __JniBaseClass(
			"javax.crypto.spec.PBEKeySpec",
			"([C)V",
			arg0
		) {}
	PBEKeySpec::PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2)
		: __JniBaseClass(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BI)V",
			arg0,
			arg1,
			arg2
		) {}
	PBEKeySpec::PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	void PBEKeySpec::clearPassword()
	{
		callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	jint PBEKeySpec::getIterationCount()
	{
		return callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	jint PBEKeySpec::getKeyLength()
	{
		return callMethod<jint>(
			"getKeyLength",
			"()I"
		);
	}
	jcharArray PBEKeySpec::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jbyteArray PBEKeySpec::getSalt()
	{
		return callObjectMethod(
			"getSalt",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

