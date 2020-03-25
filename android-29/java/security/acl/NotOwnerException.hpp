#pragma once

#ifndef JAVA_SECURITY_ACL_NOTOWNEREXCEPTION
#define JAVA_SECURITY_ACL_NOTOWNEREXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace __jni_impl::java::security::acl
{
	class NotOwnerException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security::acl


namespace __jni_impl::java::security::acl
{
	// Fields
	
	// Constructors
	void NotOwnerException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.acl.NotOwnerException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::acl

namespace java::security::acl
{
	class NotOwnerException : public __jni_impl::java::security::acl::NotOwnerException
	{
	public:
		NotOwnerException(QAndroidJniObject obj) { __thiz = obj; }
		NotOwnerException()
		{
			__constructor();
		}
	};
} // namespace java::security::acl

#endif // JAVA_SECURITY_ACL_NOTOWNEREXCEPTION

