#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class RSAPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1);
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		QAndroidJniObject getModulus();
		QAndroidJniObject getParams();
		QAndroidJniObject getPrivateExponent();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void RSAPrivateKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RSAPrivateKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAPrivateKeySpec::getModulus()
	{
		return __thiz.callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPrivateKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject RSAPrivateKeySpec::getPrivateExponent()
	{
		return __thiz.callObjectMethod(
			"getPrivateExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class RSAPrivateKeySpec : public __jni_impl::java::security::spec::RSAPrivateKeySpec
	{
	public:
		RSAPrivateKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		RSAPrivateKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RSAPrivateKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security::spec

