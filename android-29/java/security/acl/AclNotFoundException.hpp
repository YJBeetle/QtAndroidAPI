#pragma once

#ifndef JAVA_SECURITY_ACL_ACLNOTFOUNDEXCEPTION
#define JAVA_SECURITY_ACL_ACLNOTFOUNDEXCEPTION

#include "../../lang/Exception.hpp"


namespace __jni_impl::java::security::acl
{
	class AclNotFoundException : public __jni_impl::java::lang::Exception
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
	void AclNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.acl.AclNotFoundException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::acl

namespace java::security::acl
{
	class AclNotFoundException : public __jni_impl::java::security::acl::AclNotFoundException
	{
	public:
		AclNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		AclNotFoundException()
		{
			__constructor();
		}
	};
} // namespace java::security::acl

#endif // JAVA_SECURITY_ACL_ACLNOTFOUNDEXCEPTION

