#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"


namespace javax::security::auth::callback
{
	class UnsupportedCallbackException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedCallbackException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedCallbackException(QAndroidJniObject obj);
		
		// Constructors
		UnsupportedCallbackException(__JniBaseClass arg0);
		UnsupportedCallbackException(__JniBaseClass arg0, jstring arg1);
		
		// Methods
		__JniBaseClass getCallback();
	};
} // namespace javax::security::auth::callback

