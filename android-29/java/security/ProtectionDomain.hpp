#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::security
{
	class CodeSource;
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
	class ProtectionDomain : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::CodeSource arg0, __jni_impl::java::security::PermissionCollection arg1);
		void __constructor(__jni_impl::java::security::CodeSource arg0, __jni_impl::java::security::PermissionCollection arg1, __jni_impl::java::lang::ClassLoader arg2, jarray arg3);
		
		// Methods
		QAndroidJniObject getClassLoader();
		QAndroidJniObject getCodeSource();
		QAndroidJniObject getPermissions();
		jarray getPrincipals();
		jboolean implies(__jni_impl::java::security::Permission arg0);
		jboolean staticPermissionsOnly();
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "../lang/ClassLoader.hpp"
#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void ProtectionDomain::__constructor(__jni_impl::java::security::CodeSource arg0, __jni_impl::java::security::PermissionCollection arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ProtectionDomain::__constructor(__jni_impl::java::security::CodeSource arg0, __jni_impl::java::security::PermissionCollection arg1, __jni_impl::java::lang::ClassLoader arg2, jarray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[Ljava/security/Principal;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject ProtectionDomain::getClassLoader()
	{
		return __thiz.callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject ProtectionDomain::getCodeSource()
	{
		return __thiz.callObjectMethod(
			"getCodeSource",
			"()Ljava/security/CodeSource;"
		);
	}
	QAndroidJniObject ProtectionDomain::getPermissions()
	{
		return __thiz.callObjectMethod(
			"getPermissions",
			"()Ljava/security/PermissionCollection;"
		);
	}
	jarray ProtectionDomain::getPrincipals()
	{
		return __thiz.callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		).object<jarray>();
	}
	jboolean ProtectionDomain::implies(__jni_impl::java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ProtectionDomain::staticPermissionsOnly()
	{
		return __thiz.callMethod<jboolean>(
			"staticPermissionsOnly",
			"()Z"
		);
	}
	jstring ProtectionDomain::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class ProtectionDomain : public __jni_impl::java::security::ProtectionDomain
	{
	public:
		ProtectionDomain(QAndroidJniObject obj) { __thiz = obj; }
		ProtectionDomain(__jni_impl::java::security::CodeSource arg0, __jni_impl::java::security::PermissionCollection arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ProtectionDomain(__jni_impl::java::security::CodeSource arg0, __jni_impl::java::security::PermissionCollection arg1, __jni_impl::java::lang::ClassLoader arg2, jarray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::security

