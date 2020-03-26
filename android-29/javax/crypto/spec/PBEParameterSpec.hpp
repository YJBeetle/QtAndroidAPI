#pragma once

#ifndef JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC
#define JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class PBEParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0, jint arg1);
		void __constructor(jbyteArray arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		jbyteArray getSalt();
		jint getIterationCount();
		QAndroidJniObject getParameterSpec();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void PBEParameterSpec::__constructor(jbyteArray arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BI)V",
			arg0,
			arg1);
	}
	void PBEParameterSpec::__constructor(jbyteArray arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BILjava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	jbyteArray PBEParameterSpec::getSalt()
	{
		return __thiz.callObjectMethod(
			"getSalt",
			"()[B"
		).object<jbyteArray>();
	}
	jint PBEParameterSpec::getIterationCount()
	{
		return __thiz.callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	QAndroidJniObject PBEParameterSpec::getParameterSpec()
	{
		return __thiz.callObjectMethod(
			"getParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class PBEParameterSpec : public __jni_impl::javax::crypto::spec::PBEParameterSpec
	{
	public:
		PBEParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		PBEParameterSpec(jbyteArray arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PBEParameterSpec(jbyteArray arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_PBEPARAMETERSPEC

