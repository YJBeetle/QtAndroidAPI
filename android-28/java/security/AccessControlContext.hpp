#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AccessControlContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessControlContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlContext(QJniObject obj);
		
		// Constructors
		AccessControlContext(jarray arg0);
		AccessControlContext(java::security::AccessControlContext &arg0, __JniBaseClass arg1);
		
		// Methods
		void checkPermission(java::security::Permission arg0);
		jboolean equals(jobject arg0);
		__JniBaseClass getDomainCombiner();
		jint hashCode();
	};
} // namespace java::security

