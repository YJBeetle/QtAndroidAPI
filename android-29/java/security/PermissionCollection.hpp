#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::security
{
	class Permission;
}

namespace java::security
{
	class PermissionCollection : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PermissionCollection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PermissionCollection(QAndroidJniObject obj);
		
		// Constructors
		PermissionCollection();
		
		// Methods
		void add(java::security::Permission arg0);
		JObject elements();
		JObject elementsAsStream();
		jboolean implies(java::security::Permission arg0);
		jboolean isReadOnly();
		void setReadOnly();
		JString toString();
	};
} // namespace java::security

