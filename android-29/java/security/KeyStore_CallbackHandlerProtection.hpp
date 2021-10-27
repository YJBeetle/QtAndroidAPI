#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyStore_CallbackHandlerProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStore_CallbackHandlerProtection(QAndroidJniObject obj);
		// Constructors
		KeyStore_CallbackHandlerProtection(__JniBaseClass &arg0);
		KeyStore_CallbackHandlerProtection() = default;
		
		// Methods
		QAndroidJniObject getCallbackHandler();
	};
} // namespace java::security

