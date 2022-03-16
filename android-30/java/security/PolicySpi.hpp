#pragma once

#include "../../JObject.hpp"

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
	class PolicySpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PolicySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PolicySpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PolicySpi();
		
		// Methods
	};
} // namespace java::security

