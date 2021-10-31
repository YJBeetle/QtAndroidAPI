#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class Permission;
}

namespace java::security
{
	class PermissionCollection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PermissionCollection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PermissionCollection(QJniObject obj);
		
		// Constructors
		PermissionCollection();
		
		// Methods
		void add(java::security::Permission arg0);
		__JniBaseClass elements();
		__JniBaseClass elementsAsStream();
		jboolean implies(java::security::Permission arg0);
		jboolean isReadOnly();
		void setReadOnly();
		jstring toString();
	};
} // namespace java::security

