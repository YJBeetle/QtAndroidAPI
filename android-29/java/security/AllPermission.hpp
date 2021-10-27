#pragma once

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
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getActions();
		jint hashCode();
		jboolean implies(__jni_impl::java::security::Permission arg0);
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
			"()V"
		);
	}
	void AllPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AllPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AllPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AllPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jboolean AllPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AllPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AllPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AllPermission::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AllPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
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

