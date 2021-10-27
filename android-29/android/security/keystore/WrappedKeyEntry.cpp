#include "./WrappedKeyEntry.hpp"

namespace android::security::keystore
{
	// Fields
	
	WrappedKeyEntry::WrappedKeyEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WrappedKeyEntry::WrappedKeyEntry(jbyteArray &arg0, jstring &arg1, jstring &arg2, __JniBaseClass &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.WrappedKeyEntry",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	WrappedKeyEntry::WrappedKeyEntry(jbyteArray &arg0, const QString &arg1, const QString &arg2, __JniBaseClass &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.WrappedKeyEntry",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WrappedKeyEntry::getAlgorithmParameterSpec()
	{
		return __thiz.callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jstring WrappedKeyEntry::getTransformation()
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray WrappedKeyEntry::getWrappedKeyBytes()
	{
		return __thiz.callObjectMethod(
			"getWrappedKeyBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring WrappedKeyEntry::getWrappingKeyAlias()
	{
		return __thiz.callObjectMethod(
			"getWrappingKeyAlias",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::security::keystore

