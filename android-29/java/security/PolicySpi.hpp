#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ProtectionDomain;
}

namespace __jni_impl::java::security
{
	class PolicySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security

#include "CodeSource.hpp"
#include "Permission.hpp"
#include "PermissionCollection.hpp"
#include "ProtectionDomain.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void PolicySpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.PolicySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class PolicySpi : public __jni_impl::java::security::PolicySpi
	{
	public:
		PolicySpi(QAndroidJniObject obj) { __thiz = obj; }
		PolicySpi()
		{
			__constructor();
		}
	};
} // namespace java::security

