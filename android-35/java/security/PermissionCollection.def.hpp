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
		
		// QJniObject forward
		template<typename ...Ts> explicit PermissionCollection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PermissionCollection(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PermissionCollection();
		
		// Methods
		void add(java::security::Permission arg0) const;
		JObject elements() const;
		JObject elementsAsStream() const;
		jboolean implies(java::security::Permission arg0) const;
		jboolean isReadOnly() const;
		void setReadOnly() const;
		JString toString() const;
	};
} // namespace java::security

