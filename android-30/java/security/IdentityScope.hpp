#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IdentityScope(const char *className, const char *sig, Ts...agv) : java::security::Identity(className, sig, std::forward<Ts>(agv)...) {}
		IdentityScope(QAndroidJniObject obj);
		
		// Constructors
		IdentityScope(jstring arg0);
		IdentityScope(jstring arg0, java::security::IdentityScope &arg1);
		
		// Methods
		static java::security::IdentityScope getSystemScope();
		void addIdentity(java::security::Identity arg0);
		java::security::Identity getIdentity(jstring arg0);
		java::security::Identity getIdentity(JObject arg0);
		JObject identities();
		void removeIdentity(java::security::Identity arg0);
		jint size();
		jstring toString();
	};
} // namespace java::security

