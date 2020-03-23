#pragma once

#ifndef JAVAX_CRYPTO_SPEC_DHGENPARAMETERSPEC
#define JAVAX_CRYPTO_SPEC_DHGENPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class DHGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jint getPrimeSize();
		jint getExponentSize();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void DHGenParameterSpec::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.DHGenParameterSpec",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	jint DHGenParameterSpec::getPrimeSize()
	{
		return __thiz.callMethod<jint>(
			"getPrimeSize",
			"()I");
	}
	jint DHGenParameterSpec::getExponentSize()
	{
		return __thiz.callMethod<jint>(
			"getExponentSize",
			"()I");
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class DHGenParameterSpec : public __jni_impl::javax::crypto::spec::DHGenParameterSpec
	{
	public:
		DHGenParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		DHGenParameterSpec(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_DHGENPARAMETERSPEC

