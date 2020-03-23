#pragma once

#ifndef JAVA_SECURITY_SECURITYPERMISSION
#define JAVA_SECURITY_SECURITYPERMISSION

#include "BasicPermission.hpp"


namespace __jni_impl::java::security
{
	class SecurityPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void SecurityPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SecurityPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class SecurityPermission : public __jni_impl::java::security::SecurityPermission
	{
	public:
		SecurityPermission(QAndroidJniObject obj) { __thiz = obj; }
		SecurityPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SecurityPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SECURITYPERMISSION

