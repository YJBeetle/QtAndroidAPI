#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class PermissionCollection;
}

namespace java::security
{
	class Permission : public __JniBaseClass
	{
	public:
		// Fields
		
		Permission(QAndroidJniObject obj);
		// Constructors
		Permission(jstring arg0);
		Permission() = default;
		
		// Methods
		void checkGuard(jobject arg0);
		jboolean equals(jobject arg0);
		jstring getActions();
		jstring getName();
		jint hashCode();
		jboolean implies(java::security::Permission arg0);
		QAndroidJniObject newPermissionCollection();
		jstring toString();
	};
} // namespace java::security

