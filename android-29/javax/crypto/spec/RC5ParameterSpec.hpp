#pragma once

#ifndef JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC
#define JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class RC5ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4);
		void __constructor(jint arg0, jint arg1, jint arg2, jbyteArray arg3);
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint getVersion();
		jint getRounds();
		jint getWordSize();
		QAndroidJniObject getIV();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void RC5ParameterSpec::__constructor(jint arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[BI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void RC5ParameterSpec::__constructor(jint arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[B)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void RC5ParameterSpec::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean RC5ParameterSpec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint RC5ParameterSpec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint RC5ParameterSpec::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I");
	}
	jint RC5ParameterSpec::getRounds()
	{
		return __thiz.callMethod<jint>(
			"getRounds",
			"()I");
	}
	jint RC5ParameterSpec::getWordSize()
	{
		return __thiz.callMethod<jint>(
			"getWordSize",
			"()I");
	}
	QAndroidJniObject RC5ParameterSpec::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B");
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class RC5ParameterSpec : public __jni_impl::javax::crypto::spec::RC5ParameterSpec
	{
	public:
		RC5ParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, jbyteArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::crypto::spec

#endif // JAVAX_CRYPTO_SPEC_RC5PARAMETERSPEC

