#include "../../../JByteArray.hpp"
#include "../../../JCharArray.hpp"
#include "./PBEKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	PBEKeySpec::PBEKeySpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PBEKeySpec::PBEKeySpec(JCharArray arg0)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	PBEKeySpec::PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BI)V",
			arg0.object<jcharArray>(),
			arg1.object<jbyteArray>(),
			arg2
		) {}
	PBEKeySpec::PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2, jint arg3)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BII)V",
			arg0.object<jcharArray>(),
			arg1.object<jbyteArray>(),
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
	JCharArray PBEKeySpec::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	JByteArray PBEKeySpec::getSalt()
	{
		return callObjectMethod(
			"getSalt",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

