#pragma once

#ifndef JAVA_SECURITY_UNRESOLVEDPERMISSION
#define JAVA_SECURITY_UNRESOLVEDPERMISSION

#include "../../__JniBaseClass.hpp"
#include "Permission.hpp"

namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}

namespace __jni_impl::java::security
{
	class UnresolvedPermission : public __jni_impl::java::security::Permission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jarray arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		jstring getActions();
		QAndroidJniObject newPermissionCollection();
		jstring getUnresolvedType();
		jstring getUnresolvedName();
		jstring getUnresolvedActions();
		jarray getUnresolvedCerts();
	};
} // namespace __jni_impl::java::security

#include "Permission.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "PermissionCollection.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void UnresolvedPermission::__constructor(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnresolvedPermission",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jboolean UnresolvedPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring UnresolvedPermission::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UnresolvedPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean UnresolvedPermission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring UnresolvedPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UnresolvedPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	jstring UnresolvedPermission::getUnresolvedType()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnresolvedPermission::getUnresolvedName()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnresolvedPermission::getUnresolvedActions()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray UnresolvedPermission::getUnresolvedCerts()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedCerts",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class UnresolvedPermission : public __jni_impl::java::security::UnresolvedPermission
	{
	public:
		UnresolvedPermission(QAndroidJniObject obj) { __thiz = obj; }
		UnresolvedPermission(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_UNRESOLVEDPERMISSION

