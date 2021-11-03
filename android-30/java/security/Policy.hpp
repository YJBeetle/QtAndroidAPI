#pragma once

#include "../../JObject.hpp"

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
	class Policy : public JObject
	{
	public:
		// Fields
		static java::security::PermissionCollection UNSUPPORTED_EMPTY_COLLECTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Policy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Policy(QAndroidJniObject obj);
		
		// Constructors
		Policy();
		
		// Methods
		static java::security::Policy getInstance(jstring arg0, JObject arg1);
		static java::security::Policy getInstance(jstring arg0, JObject arg1, jstring arg2);
		static java::security::Policy getInstance(jstring arg0, JObject arg1, java::security::Provider arg2);
		static java::security::Policy getPolicy();
		static void setPolicy(java::security::Policy arg0);
		JObject getParameters();
		java::security::PermissionCollection getPermissions(java::security::CodeSource arg0);
		java::security::PermissionCollection getPermissions(java::security::ProtectionDomain arg0);
		java::security::Provider getProvider();
		jstring getType();
		jboolean implies(java::security::ProtectionDomain arg0, java::security::Permission arg1);
		void refresh();
	};
} // namespace java::security

