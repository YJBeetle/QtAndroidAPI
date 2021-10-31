#include "./DESKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	jint DESKeySpec::DES_KEY_LEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.spec.DESKeySpec",
			"DES_KEY_LEN"
		);
	}
	
	DESKeySpec::DESKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DESKeySpec::DESKeySpec(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DESKeySpec",
			"([B)V",
			arg0
		);
	}
	DESKeySpec::DESKeySpec(jbyteArray arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DESKeySpec",
			"([BI)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean DESKeySpec::isParityAdjusted(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jboolean DESKeySpec::isWeak(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isWeak",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jbyteArray DESKeySpec::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

