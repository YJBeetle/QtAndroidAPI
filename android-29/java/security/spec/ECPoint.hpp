#pragma once

#ifndef JAVA_SECURITY_SPEC_ECPOINT
#define JAVA_SECURITY_SPEC_ECPOINT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class ECPoint : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject POINT_INFINITY();
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getAffineX();
		QAndroidJniObject getAffineY();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	QAndroidJniObject ECPoint::POINT_INFINITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.ECPoint",
			"POINT_INFINITY",
			"Ljava/security/spec/ECPoint;"
		);
	}
	
	// Constructors
	void ECPoint::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECPoint",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ECPoint::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ECPoint::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ECPoint::getAffineX()
	{
		return __thiz.callObjectMethod(
			"getAffineX",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject ECPoint::getAffineY()
	{
		return __thiz.callObjectMethod(
			"getAffineY",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class ECPoint : public __jni_impl::java::security::spec::ECPoint
	{
	public:
		ECPoint(QAndroidJniObject obj) { __thiz = obj; }
		ECPoint(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::math::BigInteger arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_ECPOINT

