#pragma once

#ifndef JAVA_SECURITY_ACL_LASTOWNEREXCEPTION
#define JAVA_SECURITY_ACL_LASTOWNEREXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace __jni_impl::java::security::acl
{
	class LastOwnerException : public __jni_impl::java::lang::Exception
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
	void LastOwnerException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.acl.LastOwnerException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::acl

namespace java::security::acl
{
	class LastOwnerException : public __jni_impl::java::security::acl::LastOwnerException
	{
	public:
		LastOwnerException(QAndroidJniObject obj) { __thiz = obj; }
		LastOwnerException()
		{
			__constructor();
		}
	};
} // namespace java::security::acl

#endif // JAVA_SECURITY_ACL_LASTOWNEREXCEPTION

