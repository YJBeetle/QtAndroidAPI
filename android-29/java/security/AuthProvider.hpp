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
		
		AuthProvider(QAndroidJniObject obj);
		// Constructors
		AuthProvider() = default;
		
		// Methods
		void login(javax::security::auth::Subject arg0, __JniBaseClass arg1);
		void logout();
		void setCallbackHandler(__JniBaseClass arg0);
	};
} // namespace java::security

