#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class PermissionCollection;
}

namespace java::security
{
	class Permission : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Permission(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Permission(QJniObject obj);
		
		// Constructors
		Permission(jstring arg0);
		
		// Methods
		void checkGuard(jobject arg0);
		jboolean equals(jobject arg0);
		jstring getActions();
		jstring getName();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		java::security::PermissionCollection newPermissionCollection();
		jstring toString();
	};
} // namespace java::security

