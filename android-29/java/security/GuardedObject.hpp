#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::security
{
	class GuardedObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jobject getObject();
	};
} // namespace __jni_impl::java::security

#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void GuardedObject::__constructor(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GuardedObject",
			"(Ljava/lang/Object;Ljava/security/Guard;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jobject GuardedObject::getObject()
	{
		return __thiz.callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class GuardedObject : public __jni_impl::java::security::GuardedObject
	{
	public:
		GuardedObject(QAndroidJniObject obj) { __thiz = obj; }
		GuardedObject(jobject arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

