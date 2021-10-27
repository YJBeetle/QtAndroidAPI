#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::security
{
	class PrivilegedActionException;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
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
		static jobject doPrivileged(__jni_impl::__JniBaseClass arg0);
		static jobject doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1);
		static jobject doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2);
		static jobject doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0);
		static jobject doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2);
		static QAndroidJniObject getContext();
	};
} // namespace __jni_impl::java::security

#include "../lang/Exception.hpp"
#include "./AccessControlContext.hpp"
#include "./Permission.hpp"
#include "./PrivilegedActionException.hpp"
#include "./ProtectionDomain.hpp"

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
			arg0.__jniObject().object()
		);
	}
	jobject AccessController::doPrivileged(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject AccessController::doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject AccessController::doPrivileged(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		).object<jobject>();
	}
	jobject AccessController::doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject AccessController::doPrivilegedWithCombiner(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AccessControlContext arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		).object<jobject>();
	}
	QAndroidJniObject AccessController::getContext()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.AccessController",
			"getContext",
			"()Ljava/security/AccessControlContext;"
		);
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

