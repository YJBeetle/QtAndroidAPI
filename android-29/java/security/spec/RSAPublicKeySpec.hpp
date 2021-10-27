#pragma once

#ifndef JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC
#define JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class RSAPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1);
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		QAndroidJniObject getModulus();
		QAndroidJniObject getParams();
		QAndroidJniObject getPublicExponent();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void RSAPublicKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RSAPublicKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RSAPublicKeySpec::getModulus()
	{
		return __thiz.callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject RSAPublicKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	QAndroidJniObject RSAPublicKeySpec::getPublicExponent()
	{
		return __thiz.callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class RSAPublicKeySpec : public __jni_impl::java::security::spec::RSAPublicKeySpec
	{
	public:
		RSAPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		RSAPublicKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RSAPublicKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC

