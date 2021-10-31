#include "./DESedeKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	jint DESedeKeySpec::DES_EDE_KEY_LEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.spec.DESedeKeySpec",
			"DES_EDE_KEY_LEN"
		);
	}
	
	// QAndroidJniObject forward
	DESedeKeySpec::DESedeKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DESedeKeySpec::DESedeKeySpec(jbyteArray arg0)
		: __JniBaseClass(
			"javax.crypto.spec.DESedeKeySpec",
			"([B)V",
			arg0
		) {}
	DESedeKeySpec::DESedeKeySpec(jbyteArray arg0, jint arg1)
		: __JniBaseClass(
			"javax.crypto.spec.DESedeKeySpec",
			"([BI)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean DESedeKeySpec::isParityAdjusted(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"javax.crypto.spec.DESedeKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0,
			arg1
		);
	}
	jbyteArray DESedeKeySpec::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace javax::crypto::spec

