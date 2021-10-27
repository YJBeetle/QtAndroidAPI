#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::security
{
	class ConfirmationNotAvailableException : public java::lang::Exception
	{
	public:
		// Fields
		
		ConfirmationNotAvailableException(QAndroidJniObject obj);
		// Constructors
		ConfirmationNotAvailableException();
		ConfirmationNotAvailableException(jstring &arg0);
		ConfirmationNotAvailableException(const QString &arg0);
		
		// Methods
	};
} // namespace android::security

