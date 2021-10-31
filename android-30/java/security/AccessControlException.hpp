#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/SecurityException.hpp"

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
		AccessControlException(jstring arg0);
		AccessControlException(jstring arg0, java::security::Permission arg1);
		
		// Methods
		java::security::Permission getPermission();
	};
} // namespace java::security

