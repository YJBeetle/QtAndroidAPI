#pragma once

#include "./Identity.hpp"

class JString;
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
		IdentityScope(JString arg0);
		IdentityScope(JString arg0, java::security::IdentityScope &arg1);
		
		// Methods
		static java::security::IdentityScope getSystemScope();
		void addIdentity(java::security::Identity arg0) const;
		java::security::Identity getIdentity(JString arg0) const;
		java::security::Identity getIdentity(JObject arg0) const;
		JObject identities() const;
		void removeIdentity(java::security::Identity arg0) const;
		jint size() const;
		JString toString() const;
	};
} // namespace java::security

