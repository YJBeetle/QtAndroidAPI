#pragma once

#include "../../JObject.hpp"

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
	class AccessController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessController(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void checkPermission(java::security::Permission arg0);
		static jobject doPrivileged(JObject arg0);
		static jobject doPrivileged(JObject arg0, java::security::AccessControlContext arg1);
		static jobject doPrivileged(JObject arg0, java::security::AccessControlContext arg1, jarray arg2);
		static jobject doPrivilegedWithCombiner(JObject arg0);
		static jobject doPrivilegedWithCombiner(JObject arg0, java::security::AccessControlContext arg1, jarray arg2);
		static java::security::AccessControlContext getContext();
	};
} // namespace java::security

