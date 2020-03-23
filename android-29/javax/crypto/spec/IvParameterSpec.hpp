#pragma once

#ifndef JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC
#define JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class IvParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jbyteArray arg0, jint arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getIV();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void IvParameterSpec::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.IvParameterSpec",
			"([B)V",
			arg0);
	}
	void IvParameterSpec::__constructor(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.IvParameterSpec",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject IvParameterSpec::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B");
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class IvParameterSpec : public __jni_impl::javax::crypto::spec::IvParameterSpec
	{
	public:
		IvParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		IvParameterSpec(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		IvParameterSpec(jbyteArray arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC

