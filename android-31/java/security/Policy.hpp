#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class NoSuchAlgorithmException;
}
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class PermissionCollection;
}
namespace java::security
{
	class ProtectionDomain;
}
namespace java::security
{
	class Provider;
}
namespace java::util
{
	class WeakHashMap;
}

namespace java::security
{
	class Policy : public __JniBaseClass
	{
	public:
		// Fields
		static java::security::PermissionCollection UNSUPPORTED_EMPTY_COLLECTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Policy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Policy(QAndroidJniObject obj);
		
		// Constructors
		Policy();
		
		// Methods
		static java::security::Policy getInstance(jstring arg0, __JniBaseClass arg1);
		static java::security::Policy getInstance(jstring arg0, __JniBaseClass arg1, jstring arg2);
		static java::security::Policy getInstance(jstring arg0, __JniBaseClass arg1, java::security::Provider arg2);
		static java::security::Policy getPolicy();
		static void setPolicy(java::security::Policy arg0);
		__JniBaseClass getParameters();
		java::security::PermissionCollection getPermissions(java::security::CodeSource arg0);
		java::security::PermissionCollection getPermissions(java::security::ProtectionDomain arg0);
		java::security::Provider getProvider();
		jstring getType();
		jboolean implies(java::security::ProtectionDomain arg0, java::security::Permission arg1);
		void refresh();
	};
} // namespace java::security

