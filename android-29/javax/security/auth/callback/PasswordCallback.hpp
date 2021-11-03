#pragma once

#include "../../../../JObject.hpp"

class JCharArray;
class JString;

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
		PasswordCallback(JString arg0, jboolean arg1);
		
		// Methods
		void clearPassword();
		JCharArray getPassword();
		JString getPrompt();
		jboolean isEchoOn();
		void setPassword(JCharArray arg0);
	};
} // namespace javax::security::auth::callback

