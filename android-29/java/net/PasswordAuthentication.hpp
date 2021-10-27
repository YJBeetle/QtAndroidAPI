#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::net
{
	class PasswordAuthentication : public __JniBaseClass
	{
	public:
		// Fields
		
		PasswordAuthentication(QAndroidJniObject obj);
		// Constructors
		PasswordAuthentication(jstring &arg0, jcharArray &arg1);
		PasswordAuthentication(const QString &arg0, jcharArray &arg1);
		PasswordAuthentication() = default;
		
		// Methods
		jcharArray getPassword();
		jstring getUserName();
	};
} // namespace java::net

