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
		
		AccessControlContext(QAndroidJniObject obj);
		// Constructors
		AccessControlContext(jarray arg0);
		AccessControlContext(java::security::AccessControlContext &arg0, __JniBaseClass arg1);
		AccessControlContext() = default;
		
		// Methods
		void checkPermission(java::security::Permission arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getDomainCombiner();
		jint hashCode();
	};
} // namespace java::security

