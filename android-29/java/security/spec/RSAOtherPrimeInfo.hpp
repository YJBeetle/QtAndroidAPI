#pragma once

#ifndef JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO
#define JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class RSAOtherPrimeInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2);
		
		// Methods
		QAndroidJniObject getExponent();
		QAndroidJniObject getPrime();
		QAndroidJniObject getCrtCoefficient();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void RSAOtherPrimeInfo::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAOtherPrimeInfo",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAOtherPrimeInfo::getExponent()
	{
		return __thiz.callObjectMethod(
			"getExponent",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAOtherPrimeInfo::getPrime()
	{
		return __thiz.callObjectMethod(
			"getPrime",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAOtherPrimeInfo::getCrtCoefficient()
	{
		return __thiz.callObjectMethod(
			"getCrtCoefficient",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class RSAOtherPrimeInfo : public __jni_impl::java::security::spec::RSAOtherPrimeInfo
	{
	public:
		RSAOtherPrimeInfo(QAndroidJniObject obj) { __thiz = obj; }
		RSAOtherPrimeInfo(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_RSAOTHERPRIMEINFO

