#pragma once

#ifndef JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC
#define JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::spec
{
	class ECPoint;
}
namespace __jni_impl::java::security::spec
{
	class ECParameterSpec;
}

namespace __jni_impl::java::security::spec
{
	class ECPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::spec::ECPoint arg0, __jni_impl::java::security::spec::ECParameterSpec arg1);
		
		// Methods
		QAndroidJniObject getW();
		QAndroidJniObject getParams();
	};
} // namespace __jni_impl::java::security::spec

#include "ECPoint.hpp"
#include "ECParameterSpec.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void ECPublicKeySpec::__constructor(__jni_impl::java::security::spec::ECPoint arg0, __jni_impl::java::security::spec::ECParameterSpec arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECPublicKeySpec",
			"(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ECPublicKeySpec::getW()
	{
		return __thiz.callObjectMethod(
			"getW",
			"()Ljava/security/spec/ECPoint;");
	}
	QAndroidJniObject ECPublicKeySpec::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class ECPublicKeySpec : public __jni_impl::java::security::spec::ECPublicKeySpec
	{
	public:
		ECPublicKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		ECPublicKeySpec(__jni_impl::java::security::spec::ECPoint arg0, __jni_impl::java::security::spec::ECParameterSpec arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC

