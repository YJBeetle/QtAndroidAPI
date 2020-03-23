#pragma once

#ifndef JAVA_SECURITY_SPEC_DSAPARAMETERSPEC
#define JAVA_SECURITY_SPEC_DSAPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class DSAParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2);
		
		// Methods
		QAndroidJniObject getP();
		QAndroidJniObject getQ();
		QAndroidJniObject getG();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void DSAParameterSpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.DSAParameterSpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject DSAParameterSpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject DSAParameterSpec::getQ()
	{
		return __thiz.callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject DSAParameterSpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class DSAParameterSpec : public __jni_impl::java::security::spec::DSAParameterSpec
	{
	public:
		DSAParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		DSAParameterSpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_DSAPARAMETERSPEC

