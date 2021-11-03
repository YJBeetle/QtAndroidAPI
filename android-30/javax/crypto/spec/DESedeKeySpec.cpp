#include "../../../JByteArray.hpp"
#include "./DESedeKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	jint DESedeKeySpec::DES_EDE_KEY_LEN()
	{
		return getStaticField<jint>(
			"javax.crypto.spec.DESedeKeySpec",
			"DES_EDE_KEY_LEN"
		);
	}
	
	// QAndroidJniObject forward
	DESedeKeySpec::DESedeKeySpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DESedeKeySpec::DESedeKeySpec(JByteArray arg0)
		: JObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	DESedeKeySpec::DESedeKeySpec(JByteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		) {}
	
	// Methods
	jboolean DESedeKeySpec::isParityAdjusted(JByteArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"javax.crypto.spec.DESedeKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	JByteArray DESedeKeySpec::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

