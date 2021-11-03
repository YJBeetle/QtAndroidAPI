#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JObject;
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace java::security
{
	class AccessControlContext : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessControlContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlContext(QAndroidJniObject obj);
		
		// Constructors
		AccessControlContext(JArray arg0);
		AccessControlContext(java::security::AccessControlContext &arg0, JObject arg1);
		
		// Methods
		void checkPermission(java::security::Permission arg0);
		jboolean equals(JObject arg0);
		JObject getDomainCombiner();
		jint hashCode();
	};
} // namespace java::security

