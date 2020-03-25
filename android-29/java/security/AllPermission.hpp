#pragma once

#ifndef JAVA_SECURITY_ALLPERMISSION
#define JAVA_SECURITY_ALLPERMISSION

#include "../../__JniBaseClass.hpp"
#include "Permission.hpp"

namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}

namespace __jni_impl::java::security
{
	class AllPermission : public __jni_impl::java::security::Permission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		QAndroidJniObject getActions();
		QAndroidJniObject newPermissionCollection();
	};
} // namespace __jni_impl::java::security

#include "Permission.hpp"
#include "PermissionCollection.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AllPermission::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.AllPermission",
			"()V");
	}
	void AllPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AllPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean AllPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint AllPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean AllPermission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AllPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AllPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AllPermission : public __jni_impl::java::security::AllPermission
	{
	public:
		AllPermission(QAndroidJniObject obj) { __thiz = obj; }
		AllPermission()
		{
			__constructor();
		}
		AllPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_ALLPERMISSION

