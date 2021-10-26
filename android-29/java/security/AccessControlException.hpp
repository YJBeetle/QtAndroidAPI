#pragma once

#ifndef JAVA_SECURITY_ACCESSCONTROLEXCEPTION
#define JAVA_SECURITY_ACCESSCONTROLEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/SecurityException.hpp"

namespace __jni_impl::java::security
{
	class Permission;
}

namespace __jni_impl::java::security
{
	class AccessControlException : public __jni_impl::java::lang::SecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::security::Permission arg1);
		void __constructor(const QString &arg0, __jni_impl::java::security::Permission arg1);
		
		// Methods
		QAndroidJniObject getPermission();
	};
} // namespace __jni_impl::java::security

#include "Permission.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void AccessControlException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AccessControlException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessControlException::__constructor(jstring arg0, __jni_impl::java::security::Permission arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;Ljava/security/Permission;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AccessControlException::__constructor(const QString &arg0, __jni_impl::java::security::Permission arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlException",
			"(Ljava/lang/String;Ljava/security/Permission;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AccessControlException::getPermission()
	{
		return __thiz.callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class AccessControlException : public __jni_impl::java::security::AccessControlException
	{
	public:
		AccessControlException(QAndroidJniObject obj) { __thiz = obj; }
		AccessControlException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AccessControlException(jstring arg0, __jni_impl::java::security::Permission arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_ACCESSCONTROLEXCEPTION

