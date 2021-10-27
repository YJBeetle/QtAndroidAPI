#include "./SecretKeySpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	SecretKeySpec::SecretKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecretKeySpec::SecretKeySpec(jbyteArray &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SecretKeySpec::SecretKeySpec(jbyteArray &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	SecretKeySpec::SecretKeySpec(jbyteArray &arg0, jint &arg1, jint &arg2, jstring &arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SecretKeySpec::SecretKeySpec(jbyteArray &arg0, jint &arg1, jint &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	
	// Methods
	jboolean SecretKeySpec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SecretKeySpec::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray SecretKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring SecretKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SecretKeySpec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

