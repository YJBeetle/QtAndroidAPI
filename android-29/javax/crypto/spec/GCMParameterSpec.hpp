#pragma once

#ifndef JAVAX_CRYPTO_SPEC_GCMPARAMETERSPEC
#define JAVAX_CRYPTO_SPEC_GCMPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class GCMParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jbyteArray arg1);
		void __constructor(jint arg0, jbyteArray arg1, jint arg2, jint arg3);
		
		// Methods
		jint getTLen();
		jbyteArray getIV();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void GCMParameterSpec::__constructor(jint arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.GCMParameterSpec",
			"(I[B)V",
			arg0,
			arg1);
	}
	void GCMParameterSpec::__constructor(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.GCMParameterSpec",
			"(I[BII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jint GCMParameterSpec::getTLen()
	{
		return __thiz.callMethod<jint>(
			"getTLen",
			"()I"
		);
	}
	jbyteArray GCMParameterSpec::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class GCMParameterSpec : public __jni_impl::javax::crypto::spec::GCMParameterSpec
	{
	public:
		GCMParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		GCMParameterSpec(jint arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GCMParameterSpec(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_GCMPARAMETERSPEC

