#pragma once

#ifndef JAVA_SECURITY_BASICPERMISSION
#define JAVA_SECURITY_BASICPERMISSION

#include "../../__JniBaseClass.hpp"
#include "Permission.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
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
	class BasicPermission : public __jni_impl::java::security::Permission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		jstring getActions();
		QAndroidJniObject newPermissionCollection();
	};
} // namespace __jni_impl::java::security

#include "../io/ObjectInputStream.hpp"
#include "Permission.hpp"
#include "PermissionCollection.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void BasicPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void BasicPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void BasicPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BasicPermission::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.BasicPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jboolean BasicPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BasicPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BasicPermission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring BasicPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BasicPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class BasicPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		BasicPermission(QAndroidJniObject obj) { __thiz = obj; }
		BasicPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BasicPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_BASICPERMISSION

