#include "./PBEKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	PBEKeySpec::PBEKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PBEKeySpec::PBEKeySpec(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C)V",
			arg0
		);
	}
	PBEKeySpec::PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	PBEKeySpec::PBEKeySpec(jcharArray arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void PBEKeySpec::clearPassword()
	{
		__thiz.callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	jint PBEKeySpec::getIterationCount()
	{
		return __thiz.callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	jint PBEKeySpec::getKeyLength()
	{
		return __thiz.callMethod<jint>(
			"getKeyLength",
			"()I"
		);
	}
	jcharArray PBEKeySpec::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jbyteArray PBEKeySpec::getSalt()
	{
		return __thiz.callObjectMethod(
			"getSalt",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

