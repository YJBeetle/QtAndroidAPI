#pragma once

#ifndef JAVA_SECURITY_ACCESSCONTROLCONTEXT
#define JAVA_SECURITY_ACCESSCONTROLCONTEXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class ProtectionDomain;
}
namespace __jni_impl::java::security
{
	class Permission;
}

namespace __jni_impl::java::security
{
	class AccessControlContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::AccessControlContext arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jarray arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		void checkPermission(__jni_impl::java::security::Permission arg0);
		QAndroidJniObject getDomainCombiner();
	};
} // namespace __jni_impl::java::security

#include "ProtectionDomain.hpp"
#include "Permission.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AccessControlContext::__constructor(__jni_impl::java::security::AccessControlContext arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlContext",
			"(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AccessControlContext::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlContext",
			"([Ljava/security/ProtectionDomain;)V",
			arg0);
	}
	
	// Methods
	jboolean AccessControlContext::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AccessControlContext::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void AccessControlContext::checkPermission(__jni_impl::java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessControlContext::getDomainCombiner()
	{
		return __thiz.callObjectMethod(
			"getDomainCombiner",
			"()Ljava/security/DomainCombiner;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AccessControlContext : public __jni_impl::java::security::AccessControlContext
	{
	public:
		AccessControlContext(QAndroidJniObject obj) { __thiz = obj; }
		AccessControlContext(__jni_impl::java::security::AccessControlContext arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AccessControlContext(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_ACCESSCONTROLCONTEXT

