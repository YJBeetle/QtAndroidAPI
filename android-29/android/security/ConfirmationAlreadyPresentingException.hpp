#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::security
{
	class ConfirmationAlreadyPresentingException : public java::lang::Exception
	{
	public:
		// Fields
		
		ConfirmationAlreadyPresentingException(QAndroidJniObject obj);
		// Constructors
		ConfirmationAlreadyPresentingException();
		ConfirmationAlreadyPresentingException(jstring arg0);
		
		// Methods
	};
} // namespace android::security

