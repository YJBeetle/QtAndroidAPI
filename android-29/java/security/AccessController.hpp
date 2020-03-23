#pragma once

#ifndef JAVA_SECURITY_ACCESSCONTROLLER
#define JAVA_SECURITY_ACCESSCONTROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class AccessControlContext;
}
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
	class PrivilegedActionException;
}
namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::java::security
{
	class AccessController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void checkPermission(__jni_impl::java::security::Permission arg0);
		static QAndroidJniObject doPrivileged(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1);
		static QAndroidJniObject doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2);
		static QAndroidJniObject getContext();
		static QAndroidJniObject doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2);
		static QAndroidJniObject doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::security

#include "AccessControlContext.hpp"
#include "ProtectionDomain.hpp"
#include "Permission.hpp"
#include "PrivilegedActionException.hpp"
#include "../lang/Exception.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AccessController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessController",
			"(V)V");
	}
	
	// Methods
	void AccessController::checkPermission(__jni_impl::java::security::Permission arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.AccessController",
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessController::doPrivileged(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessController::doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject AccessController::doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject AccessController::getContext()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"getContext",
			"()Ljava/security/AccessControlContext;");
	}
	QAndroidJniObject AccessController::doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject AccessController::doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AccessController : public __jni_impl::java::security::AccessController
	{
	public:
		AccessController(QAndroidJniObject obj) { __thiz = obj; }
		AccessController()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_ACCESSCONTROLLER

