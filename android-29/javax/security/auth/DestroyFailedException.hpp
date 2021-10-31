#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::security::auth
{
	class DestroyFailedException : public java::lang::Exception
	{
	public:
		// Fields
		
		DestroyFailedException(QAndroidJniObject obj);
		// Constructors
		DestroyFailedException();
		DestroyFailedException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::auth

