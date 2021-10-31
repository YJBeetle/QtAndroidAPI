#include "./PSource.hpp"
#include "./OAEPParameterSpec.hpp"

namespace javax::crypto::spec
{
	// Fields
	QAndroidJniObject OAEPParameterSpec::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.crypto.spec.OAEPParameterSpec",
			"DEFAULT",
			"Ljavax/crypto/spec/OAEPParameterSpec;"
		);
	}
	
	OAEPParameterSpec::OAEPParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OAEPParameterSpec::OAEPParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, javax::crypto::spec::PSource arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.OAEPParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;Ljavax/crypto/spec/PSource;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jstring OAEPParameterSpec::getDigestAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OAEPParameterSpec::getMGFAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject OAEPParameterSpec::getMGFParameters()
	{
		return __thiz.callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject OAEPParameterSpec::getPSource()
	{
		return __thiz.callObjectMethod(
			"getPSource",
			"()Ljavax/crypto/spec/PSource;"
		);
	}
} // namespace javax::crypto::spec

