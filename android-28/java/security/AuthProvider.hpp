#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/Dictionary.hpp"
#include "../util/Hashtable.hpp"
#include "../util/Properties.hpp"
#include "./Provider.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit AuthProvider(const char *className, const char *sig, Ts...agv) : java::security::Provider(className, sig, std::forward<Ts>(agv)...) {}
		AuthProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		void login(javax::security::auth::Subject arg0, __JniBaseClass arg1);
		void logout();
		void setCallbackHandler(__JniBaseClass arg0);
	};
} // namespace java::security

