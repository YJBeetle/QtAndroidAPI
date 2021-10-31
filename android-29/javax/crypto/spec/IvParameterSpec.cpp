#include "./IvParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	IvParameterSpec::IvParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IvParameterSpec::IvParameterSpec(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.IvParameterSpec",
			"([B)V",
			arg0
		);
	}
	IvParameterSpec::IvParameterSpec(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.IvParameterSpec",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jbyteArray IvParameterSpec::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

