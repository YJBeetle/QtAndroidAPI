#pragma once

#ifndef JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC
#define JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC

#include "RSAPrivateKeySpec.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class RSAMultiPrimePrivateCrtKeySpec : public __jni_impl::java::security::spec::RSAPrivateKeySpec
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, jarray arg8);
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, jarray arg8, __jni_impl::__JniBaseClass arg9);
		
		// Methods
		QAndroidJniObject getCrtCoefficient();
		QAndroidJniObject getPublicExponent();
		QAndroidJniObject getPrimeP();
		QAndroidJniObject getPrimeQ();
		QAndroidJniObject getPrimeExponentP();
		QAndroidJniObject getPrimeExponentQ();
		QAndroidJniObject getOtherPrimeInfo();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void RSAMultiPrimePrivateCrtKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, jarray arg8)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAMultiPrimePrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8);
	}
	void RSAMultiPrimePrivateCrtKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, jarray arg8, __jni_impl::__JniBaseClass arg9)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAMultiPrimePrivateCrtKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8,
			arg9.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient()
	{
		return __thiz.callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeP()
	{
		return __thiz.callObjectMethod(
			"getPrimeP",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeQ",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentP",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ()
	{
		return __thiz.callObjectMethod(
			"getPrimeExponentQ",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo()
	{
		return __thiz.callObjectMethod(
			"getOtherPrimeInfo",
			"()[Ljava/security/spec/RSAOtherPrimeInfo;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class RSAMultiPrimePrivateCrtKeySpec : public __jni_impl::java::security::spec::RSAMultiPrimePrivateCrtKeySpec
	{
	public:
		RSAMultiPrimePrivateCrtKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		RSAMultiPrimePrivateCrtKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, jarray arg8)
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
		RSAMultiPrimePrivateCrtKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3, __jni_impl::java::math::BigInteger arg4, __jni_impl::java::math::BigInteger arg5, __jni_impl::java::math::BigInteger arg6, __jni_impl::java::math::BigInteger arg7, jarray arg8, __jni_impl::__JniBaseClass arg9)
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
				arg8,
				arg9);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC

