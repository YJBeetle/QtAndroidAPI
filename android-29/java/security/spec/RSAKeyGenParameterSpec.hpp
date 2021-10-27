#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class RSAKeyGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject F0();
		static QAndroidJniObject F4();
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::java::math::BigInteger arg1);
		void __constructor(jint arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		QAndroidJniObject getKeyParams();
		jint getKeysize();
		QAndroidJniObject getPublicExponent();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	QAndroidJniObject RSAKeyGenParameterSpec::F0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F0",
			"Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAKeyGenParameterSpec::F4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.RSAKeyGenParameterSpec",
			"F4",
			"Ljava/math/BigInteger;"
		);
	}
	
	// Constructors
	void RSAKeyGenParameterSpec::__constructor(jint arg0, __jni_impl::java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RSAKeyGenParameterSpec::__constructor(jint arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAKeyGenParameterSpec",
			"(ILjava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAKeyGenParameterSpec::getKeyParams()
	{
		return __thiz.callObjectMethod(
			"getKeyParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jint RSAKeyGenParameterSpec::getKeysize()
	{
		return __thiz.callMethod<jint>(
			"getKeysize",
			"()I"
		);
	}
	QAndroidJniObject RSAKeyGenParameterSpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class RSAKeyGenParameterSpec : public __jni_impl::java::security::spec::RSAKeyGenParameterSpec
	{
	public:
		RSAKeyGenParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		RSAKeyGenParameterSpec(jint arg0, __jni_impl::java::math::BigInteger arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RSAKeyGenParameterSpec(jint arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security::spec

