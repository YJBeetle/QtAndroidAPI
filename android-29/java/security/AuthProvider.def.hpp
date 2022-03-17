#pragma once

#include "./Provider.def.hpp"

class JString;
namespace javax::security::auth
{
	class Subject;
}

namespace java::security
{
	class AuthProvider : public java::security::Provider
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AuthProvider(const char *className, const char *sig, Ts...agv) : java::security::Provider(className, sig, std::forward<Ts>(agv)...) {}
		AuthProvider(QAndroidJniObject obj) : java::security::Provider(obj) {}
		
		// Constructors
		
		// Methods
		void login(javax::security::auth::Subject arg0, JObject arg1) const;
		void logout() const;
		void setCallbackHandler(JObject arg0) const;
	};
} // namespace java::security

