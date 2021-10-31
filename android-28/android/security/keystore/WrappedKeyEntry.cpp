#include "./WrappedKeyEntry.hpp"

namespace android::security::keystore
{
	// Fields
	
	// QAndroidJniObject forward
	WrappedKeyEntry::WrappedKeyEntry(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WrappedKeyEntry::WrappedKeyEntry(jbyteArray arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
		: __JniBaseClass(
			"android.security.keystore.WrappedKeyEntry",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	__JniBaseClass WrappedKeyEntry::getAlgorithmParameterSpec()
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jstring WrappedKeyEntry::getTransformation()
	{
		return callObjectMethod(
			"getTransformation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray WrappedKeyEntry::getWrappedKeyBytes()
	{
		return callObjectMethod(
			"getWrappedKeyBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring WrappedKeyEntry::getWrappingKeyAlias()
	{
		return callObjectMethod(
			"getWrappingKeyAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::security::keystore

