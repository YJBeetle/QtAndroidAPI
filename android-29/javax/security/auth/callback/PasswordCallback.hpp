#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::security::auth::callback
{
	class PasswordCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		PasswordCallback(QAndroidJniObject obj);
		// Constructors
		PasswordCallback(jstring &arg0, jboolean &arg1);
		PasswordCallback(const QString &arg0, jboolean &arg1);
		PasswordCallback() = default;
		
		// Methods
		void clearPassword();
		jcharArray getPassword();
		jstring getPrompt();
		jboolean isEchoOn();
		void setPassword(jcharArray arg0);
	};
} // namespace javax::security::auth::callback

