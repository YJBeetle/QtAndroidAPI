#pragma once

#ifndef JAVA_SECURITY_PERMISSION
#define JAVA_SECURITY_PERMISSION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class PermissionCollection;
}

namespace __jni_impl::java::security
{
	class Permission : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		jstring getActions();
		QAndroidJniObject newPermissionCollection();
		void checkGuard(jobject arg0);
	};
} // namespace __jni_impl::java::security

#include "PermissionCollection.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Permission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Permission",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jstring Permission::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Permission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Permission::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Permission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Permission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring Permission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Permission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	void Permission::checkGuard(jobject arg0)
	{
		__thiz.callMethod<void>(
			"checkGuard",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Permission : public __jni_impl::java::security::Permission
	{
	public:
		Permission(QAndroidJniObject obj) { __thiz = obj; }
		Permission(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PERMISSION

