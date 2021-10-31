#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Exception;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class PrivilegedActionException;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace java::security
{
	class AccessController : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessController(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void checkPermission(java::security::Permission arg0);
		static jobject doPrivileged(__JniBaseClass arg0);
		static jobject doPrivileged(__JniBaseClass arg0, java::security::AccessControlContext arg1);
		static jobject doPrivileged(__JniBaseClass arg0, java::security::AccessControlContext arg1, jarray arg2);
		static jobject doPrivilegedWithCombiner(__JniBaseClass arg0);
		static jobject doPrivilegedWithCombiner(__JniBaseClass arg0, java::security::AccessControlContext arg1, jarray arg2);
		static java::security::AccessControlContext getContext();
	};
} // namespace java::security

