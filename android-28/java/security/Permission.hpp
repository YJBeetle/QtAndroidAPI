#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Permission(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Permission(QAndroidJniObject obj);
		
		// Constructors
		Permission(JString arg0);
		
		// Methods
		void checkGuard(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		JString getActions() const;
		JString getName() const;
		jint hashCode() const;
		jboolean implies(java::security::Permission arg0) const;
		java::security::PermissionCollection newPermissionCollection() const;
		JString toString() const;
	};
} // namespace java::security

