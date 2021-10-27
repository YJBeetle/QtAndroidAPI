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
		
		PermissionCollection(QAndroidJniObject obj);
		// Constructors
		PermissionCollection();
		
		// Methods
		void add(java::security::Permission arg0);
		QAndroidJniObject elements();
		QAndroidJniObject elementsAsStream();
		jboolean implies(java::security::Permission arg0);
		jboolean isReadOnly();
		void setReadOnly();
		jstring toString();
	};
} // namespace java::security

