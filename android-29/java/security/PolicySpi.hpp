#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class PermissionCollection;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace java::security
{
	class PolicySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		PolicySpi(QAndroidJniObject obj);
		// Constructors
		PolicySpi();
		
		// Methods
	};
} // namespace java::security

