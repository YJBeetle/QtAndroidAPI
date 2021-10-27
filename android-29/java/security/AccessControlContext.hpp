#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}

namespace __jni_impl::java::security
{
	class AccessControlContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0);
		void __constructor(__jni_impl::java::security::AccessControlContext arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void checkPermission(__jni_impl::java::security::Permission arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getDomainCombiner();
		jint hashCode();
	};
} // namespace __jni_impl::java::security

#include "Permission.hpp"
#include "ProtectionDomain.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AccessControlContext::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlContext",
			"([Ljava/security/ProtectionDomain;)V",
			arg0
		);
	}
	void AccessControlContext::__constructor(__jni_impl::java::security::AccessControlContext arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlContext",
			"(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void AccessControlContext::checkPermission(__jni_impl::java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessControlContext::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AccessControlContext::getDomainCombiner()
	{
		return __thiz.callObjectMethod(
			"getDomainCombiner",
			"()Ljava/security/DomainCombiner;"
		);
	}
	jint AccessControlContext::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AccessControlContext : public __jni_impl::java::security::AccessControlContext
	{
	public:
		AccessControlContext(QAndroidJniObject obj) { __thiz = obj; }
		AccessControlContext(jarray arg0)
		{
			__constructor(
				arg0);
		}
		AccessControlContext(__jni_impl::java::security::AccessControlContext arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

