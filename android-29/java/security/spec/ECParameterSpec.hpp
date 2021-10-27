#pragma once

#ifndef JAVA_SECURITY_SPEC_ECPARAMETERSPEC
#define JAVA_SECURITY_SPEC_ECPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::security::spec
{
	class ECPoint;
}
namespace __jni_impl::java::security::spec
{
	class EllipticCurve;
}

namespace __jni_impl::java::security::spec
{
	class ECParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::spec::EllipticCurve arg0, __jni_impl::java::security::spec::ECPoint arg1, __jni_impl::java::math::BigInteger arg2, jint arg3);
		
		// Methods
		jint getCofactor();
		QAndroidJniObject getCurve();
		QAndroidJniObject getGenerator();
		QAndroidJniObject getOrder();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"
#include "ECPoint.hpp"
#include "EllipticCurve.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void ECParameterSpec::__constructor(__jni_impl::java::security::spec::EllipticCurve arg0, __jni_impl::java::security::spec::ECPoint arg1, __jni_impl::java::math::BigInteger arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECParameterSpec",
			"(Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	jint ECParameterSpec::getCofactor()
	{
		return __thiz.callMethod<jint>(
			"getCofactor",
			"()I"
		);
	}
	QAndroidJniObject ECParameterSpec::getCurve()
	{
		return __thiz.callObjectMethod(
			"getCurve",
			"()Ljava/security/spec/EllipticCurve;"
		);
	}
	QAndroidJniObject ECParameterSpec::getGenerator()
	{
		return __thiz.callObjectMethod(
			"getGenerator",
			"()Ljava/security/spec/ECPoint;"
		);
	}
	QAndroidJniObject ECParameterSpec::getOrder()
	{
		return __thiz.callObjectMethod(
			"getOrder",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class ECParameterSpec : public __jni_impl::java::security::spec::ECParameterSpec
	{
	public:
		ECParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		ECParameterSpec(__jni_impl::java::security::spec::EllipticCurve arg0, __jni_impl::java::security::spec::ECPoint arg1, __jni_impl::java::math::BigInteger arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_ECPARAMETERSPEC

