#include "./DESKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	jint DESKeySpec::DES_KEY_LEN()
	{
		return getStaticField<jint>(
			"javax.crypto.spec.DESKeySpec",
			"DES_KEY_LEN"
		);
	}
	
	// QAndroidJniObject forward
	DESKeySpec::DESKeySpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DESKeySpec::DESKeySpec(jbyteArray arg0)
		: JObject(
			"javax.crypto.spec.DESKeySpec",
			"([B)V",
			arg0
		) {}
	DESKeySpec::DESKeySpec(jbyteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.DESKeySpec",
			"([BI)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean DESKeySpec::isParityAdjusted(jbyteArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jboolean DESKeySpec::isWeak(jbyteArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isWeak",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jbyteArray DESKeySpec::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

