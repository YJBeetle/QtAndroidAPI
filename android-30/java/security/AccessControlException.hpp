#pragma once

#include "../lang/SecurityException.hpp"

class JString;
namespace java::security
{
	class Permission;
}

namespace java::security
{
	class AccessControlException : public java::lang::SecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessControlException(const char *className, const char *sig, Ts...agv) : java::lang::SecurityException(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlException(QJniObject obj);
		
		// Constructors
		AccessControlException(JString arg0);
		AccessControlException(JString arg0, java::security::Permission arg1);
		
		// Methods
		java::security::Permission getPermission() const;
	};
} // namespace java::security

