#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::crypto::spec
{
	class RC2ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jbyteArray arg1);
		void __constructor(jint arg0, jbyteArray arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getEffectiveKeyBits();
		jbyteArray getIV();
		jint hashCode();
	};
} // namespace __jni_impl::javax::crypto::spec


namespace __jni_impl::javax::crypto::spec
{
	// Fields
	
	// Constructors
	void RC2ParameterSpec::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I)V",
			arg0
		);
	}
	void RC2ParameterSpec::__constructor(jint arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void RC2ParameterSpec::__constructor(jint arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean RC2ParameterSpec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RC2ParameterSpec::getEffectiveKeyBits()
	{
		return __thiz.callMethod<jint>(
			"getEffectiveKeyBits",
			"()I"
		);
	}
	jbyteArray RC2ParameterSpec::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
	jint RC2ParameterSpec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::javax::crypto::spec

namespace javax::crypto::spec
{
	class RC2ParameterSpec : public __jni_impl::javax::crypto::spec::RC2ParameterSpec
	{
	public:
		RC2ParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		RC2ParameterSpec(jint arg0)
		{
			__constructor(
				arg0);
		}
		RC2ParameterSpec(jint arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RC2ParameterSpec(jint arg0, jbyteArray arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::crypto::spec

