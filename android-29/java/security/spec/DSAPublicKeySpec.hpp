#pragma once

#ifndef JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC
#define JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class DSAPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3);
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getQ();
		QAndroidJniObject getY();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void DSAPublicKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.DSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DSAPublicKeySpec::getG()
	{
		return __thiz.callObjectMethod(
			"getG",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getQ()
	{
		return __thiz.callObjectMethod(
			"getQ",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject DSAPublicKeySpec::getY()
	{
		return __thiz.callObjectMethod(
			"getY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class DSAPublicKeySpec : public __jni_impl::java::security::spec::DSAPublicKeySpec
	{
	public:
		DSAPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		DSAPublicKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, __jni_impl::java::math::BigInteger arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC

