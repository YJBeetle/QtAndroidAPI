#pragma once

#include "../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessControlContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlContext(QJniObject obj);
		
		// Constructors
		AccessControlContext(jarray arg0);
		AccessControlContext(java::security::AccessControlContext &arg0, JObject arg1);
		
		// Methods
		void checkPermission(java::security::Permission arg0);
		jboolean equals(jobject arg0);
		JObject getDomainCombiner();
		jint hashCode();
	};
} // namespace java::security

