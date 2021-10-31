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
		
		// QJniObject forward
		template<typename ...Ts> explicit PolicySpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PolicySpi(QJniObject obj);
		
		// Constructors
		PolicySpi();
		
		// Methods
	};
} // namespace java::security

