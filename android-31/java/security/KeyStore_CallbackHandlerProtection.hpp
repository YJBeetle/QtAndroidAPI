#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyStore_CallbackHandlerProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStore_CallbackHandlerProtection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_CallbackHandlerProtection(QAndroidJniObject obj);
		
		// Constructors
		KeyStore_CallbackHandlerProtection(__JniBaseClass arg0);
		
		// Methods
		__JniBaseClass getCallbackHandler();
	};
} // namespace java::security

