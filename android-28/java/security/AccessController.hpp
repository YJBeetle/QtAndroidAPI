#pragma once

#include "../../JObject.hpp"

class JArray;
class JClass;
namespace java::lang
{
	class Exception;
}
class JObject;
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
		AccessController(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static void checkPermission(java::security::Permission arg0);
		static JObject doPrivileged(JObject arg0);
		static JObject doPrivileged(JObject arg0, java::security::AccessControlContext arg1);
		static JObject doPrivileged(JObject arg0, java::security::AccessControlContext arg1, JArray arg2);
		static JObject doPrivilegedWithCombiner(JObject arg0);
		static JObject doPrivilegedWithCombiner(JObject arg0, java::security::AccessControlContext arg1, JArray arg2);
		static java::security::AccessControlContext getContext();
	};
} // namespace java::security

