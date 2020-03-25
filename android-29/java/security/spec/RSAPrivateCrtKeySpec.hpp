#pragma once

#ifndef JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC
#define JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC

#include "../../../__JniBaseClass.hpp"
#include "RSAPrivateKeySpec.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class RSAPrivateCrtKeySpec : public __jni_impl::java::security::spec::RSAPrivateKeySpec
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7);
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, __jni_impl::__JniBaseClass arg8);
		
		// Methods
		QAndroidJniObject getCrtCoefficient();
		QAndroidJniObject getPublicExponent();
		QAndroidJniObject getPrimeP();
		QAndroidJniObject getPrimeQ();
		QAndroidJniObject getPrimeExponentP();
		QAndroidJniObject getPrimeExponentQ();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void RSAPrivateCrtKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object());
	}
	void RSAPrivateCrtKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, __jni_impl::__JniBaseClass arg8)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject RSAPrivateCrtKeySpec::getCrtCoefficient()
	{
		return __thiz.callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeP()
	{
		return __thiz.callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeExponentP()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAPrivateCrtKeySpec::getPrimeExponentQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class RSAPrivateCrtKeySpec : public __jni_impl::java::security::spec::RSAPrivateCrtKeySpec
	{
	public:
		RSAPrivateCrtKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		RSAPrivateCrtKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
		RSAPrivateCrtKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, __jni_impl::__JniBaseClass arg8)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC

