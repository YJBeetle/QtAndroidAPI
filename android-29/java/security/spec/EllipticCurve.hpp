#pragma once

#ifndef JAVA_SECURITY_SPEC_ELLIPTICCURVE
#define JAVA_SECURITY_SPEC_ELLIPTICCURVE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class EllipticCurve : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, jbyteArray arg3);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getField();
		QAndroidJniObject getSeed();
		QAndroidJniObject getA();
		QAndroidJniObject getB();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void EllipticCurve::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, jbyteArray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	void EllipticCurve::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.EllipticCurve",
			"(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	jboolean EllipticCurve::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint EllipticCurve::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject EllipticCurve::getField()
	{
		return __thiz.callObjectMethod(
			"getField",
			"()Ljava/security/spec/ECField;");
	}
	QAndroidJniObject EllipticCurve::getSeed()
	{
		return __thiz.callObjectMethod(
			"getSeed",
			"()[B");
	}
	QAndroidJniObject EllipticCurve::getA()
	{
		return __thiz.callObjectMethod(
			"getA",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject EllipticCurve::getB()
	{
		return __thiz.callObjectMethod(
			"getB",
			"()Ljava/math/BigInteger;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class EllipticCurve : public __jni_impl::java::security::spec::EllipticCurve
	{
	public:
		EllipticCurve(QAndroidJniObject obj) { __thiz = obj; }
		EllipticCurve(__jni_impl::__JniBaseClass arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2, jbyteArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		EllipticCurve(__jni_impl::__JniBaseClass arg0, __jni_impl::java::math::BigInteger arg1, __jni_impl::java::math::BigInteger arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_ELLIPTICCURVE

