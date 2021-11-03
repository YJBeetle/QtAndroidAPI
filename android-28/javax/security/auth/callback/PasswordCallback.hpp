#pragma once

#include "../../../../JObject.hpp"


namespace javax::security::auth::callback
{
	class PasswordCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PasswordCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasswordCallback(QJniObject obj);
		
		// Constructors
		PasswordCallback(jstring arg0, jboolean arg1);
		
		// Methods
		void clearPassword();
		jcharArray getPassword();
		jstring getPrompt();
		jboolean isEchoOn();
		void setPassword(jcharArray arg0);
	};
} // namespace javax::security::auth::callback

