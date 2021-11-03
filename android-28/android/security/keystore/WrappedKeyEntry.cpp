#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./WrappedKeyEntry.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QJniObject forward
	WrappedKeyEntry::WrappedKeyEntry(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WrappedKeyEntry::WrappedKeyEntry(JByteArray arg0, JString arg1, JString arg2, JObject arg3)
		: JObject(
			"android.security.keystore.WrappedKeyEntry",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	JObject WrappedKeyEntry::getAlgorithmParameterSpec()
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	JString WrappedKeyEntry::getTransformation()
	{
		return callObjectMethod(
			"getTransformation",
			"()Ljava/lang/String;"
		);
	}
	JByteArray WrappedKeyEntry::getWrappedKeyBytes()
	{
		return callObjectMethod(
			"getWrappedKeyBytes",
			"()[B"
		);
	}
	JString WrappedKeyEntry::getWrappingKeyAlias()
	{
		return callObjectMethod(
			"getWrappingKeyAlias",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::security::keystore

