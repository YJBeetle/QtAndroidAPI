#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"


namespace javax::security::auth::callback
{
	class UnsupportedCallbackException : public java::lang::Exception
	{
	public:
		// Fields
		
		UnsupportedCallbackException(QAndroidJniObject obj);
		// Constructors
		UnsupportedCallbackException(__JniBaseClass arg0);
		UnsupportedCallbackException(__JniBaseClass arg0, jstring arg1);
		UnsupportedCallbackException() = default;
		
		// Methods
		QAndroidJniObject getCallback();
	};
} // namespace javax::security::auth::callback

