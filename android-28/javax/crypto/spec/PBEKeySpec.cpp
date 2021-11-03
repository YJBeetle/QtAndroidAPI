#include "./PBEKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	PBEKeySpec::PBEKeySpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PBEKeySpec::PBEKeySpec(jcharArray arg0)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C)V",
			arg0
		) {}
	PBEKeySpec::PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BI)V",
			arg0,
			arg1,
			arg2
		) {}
	PBEKeySpec::PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3)
		: JObject(
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

