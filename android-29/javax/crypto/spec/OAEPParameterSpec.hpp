#pragma once

#ifndef JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC
#define JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::crypto::spec
{
	class PSource;
}

namespace __jni_impl::javax::crypto::spec
{
	class OAEPParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::javax::crypto::spec::PSource arg3);
		
		// Methods
		QAndroidJniObject getPSource();
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		QAndroidJniObject getMGFParameters();
	};
} // namespace __jni_impl::javax::crypto::spec

#include "PSource.hpp"

namespace __jni_impl::javax::crypto::spec
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
	
	// Constructors
	void OAEPParameterSpec::__constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::javax::crypto::spec::PSource arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.OAEPParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;Ljavax/crypto/spec/PSource;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject OAEPParameterSpec::getPSource()
	{
		return __thiz.callObjectMethod(
			"getPSource",
			"()Ljavax/crypto/spec/PSource;"
		);
	}
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
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class OAEPParameterSpec : public __jni_impl::javax::crypto::spec::OAEPParameterSpec
	{
	public:
		OAEPParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		OAEPParameterSpec(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::javax::crypto::spec::PSource arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC

