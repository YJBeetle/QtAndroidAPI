#pragma once

#ifndef JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC
#define JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::security::spec
{
	class ECParameterSpec;
}

namespace __jni_impl::java::security::spec
{
	class ECPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::security::spec::ECParameterSpec arg1);
		
		// Methods
		QAndroidJniObject getS();
		QAndroidJniObject getParams();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"
#include "ECParameterSpec.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void ECPrivateKeySpec::__constructor(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::security::spec::ECParameterSpec arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECPrivateKeySpec",
			"(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ECPrivateKeySpec::getS()
	{
		return __thiz.callObjectMethod(
			"getS",
			"()Ljava/math/BigInteger;");
	}
	QAndroidJniObject ECPrivateKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class ECPrivateKeySpec : public __jni_impl::java::security::spec::ECPrivateKeySpec
	{
	public:
		ECPrivateKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		ECPrivateKeySpec(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::security::spec::ECParameterSpec arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_ECPRIVATEKEYSPEC

