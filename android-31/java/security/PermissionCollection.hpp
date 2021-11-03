#pragma once

#include "../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit PermissionCollection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PermissionCollection(QJniObject obj);
		
		// Constructors
		PermissionCollection();
		
		// Methods
		void add(java::security::Permission arg0);
		JObject elements();
		JObject elementsAsStream();
		jboolean implies(java::security::Permission arg0);
		jboolean isReadOnly();
		void setReadOnly();
		jstring toString();
	};
} // namespace java::security

