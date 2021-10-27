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
		
		AccessController(QAndroidJniObject obj);
		// Constructors
		AccessController() = default;
		
		// Methods
		static void checkPermission(java::security::Permission arg0);
		static jobject doPrivileged(__JniBaseClass arg0);
		static jobject doPrivileged(__JniBaseClass arg0, java::security::AccessControlContext arg1);
		static jobject doPrivileged(__JniBaseClass arg0, java::security::AccessControlContext arg1, jarray arg2);
		static jobject doPrivilegedWithCombiner(__JniBaseClass arg0);
		static jobject doPrivilegedWithCombiner(__JniBaseClass arg0, java::security::AccessControlContext arg1, jarray arg2);
		static QAndroidJniObject getContext();
	};
} // namespace java::security

