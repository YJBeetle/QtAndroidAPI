#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Identity.hpp"

namespace java::security
{
	class Identity;
}

namespace java::security
{
	class IdentityScope : public java::security::Identity
	{
	public:
		// Fields
		
		IdentityScope(QAndroidJniObject obj);
		// Constructors
		IdentityScope(jstring arg0);
		IdentityScope(jstring arg0, java::security::IdentityScope &arg1);
		IdentityScope() = default;
		
		// Methods
		static QAndroidJniObject getSystemScope();
		void addIdentity(java::security::Identity arg0);
		QAndroidJniObject getIdentity(jstring arg0);
		QAndroidJniObject getIdentity(__JniBaseClass arg0);
		QAndroidJniObject identities();
		void removeIdentity(java::security::Identity arg0);
		jint size();
		jstring toString();
	};
} // namespace java::security

