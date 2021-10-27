#include "../lang/ClassLoader.hpp"
#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"

namespace java::security
{
	// Fields
	
	ProtectionDomain::ProtectionDomain(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProtectionDomain::ProtectionDomain(java::security::CodeSource &arg0, java::security::PermissionCollection &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ProtectionDomain::ProtectionDomain(java::security::CodeSource &arg0, java::security::PermissionCollection &arg1, java::lang::ClassLoader &arg2, jarray &arg3)
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
	jboolean ProtectionDomain::implies(java::security::Permission arg0)
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
} // namespace java::security

