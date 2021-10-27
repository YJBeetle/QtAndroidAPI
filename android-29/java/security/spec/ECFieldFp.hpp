#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::security::spec
{
	class ECFieldFp : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::math::BigInteger arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFieldSize();
		QAndroidJniObject getP();
		jint hashCode();
	};
} // namespace __jni_impl::java::security::spec

#include "../../math/BigInteger.hpp"

namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void ECFieldFp::__constructor(__jni_impl::java::math::BigInteger arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECFieldFp",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ECFieldFp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ECFieldFp::getFieldSize()
	{
		return __thiz.callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	QAndroidJniObject ECFieldFp::getP()
	{
		return __thiz.callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldFp::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class ECFieldFp : public __jni_impl::java::security::spec::ECFieldFp
	{
	public:
		ECFieldFp(QAndroidJniObject obj) { __thiz = obj; }
		ECFieldFp(__jni_impl::java::math::BigInteger arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::spec

