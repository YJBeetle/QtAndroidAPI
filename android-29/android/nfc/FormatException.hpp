#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::nfc
{
	class FormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		FormatException(QAndroidJniObject obj);
		// Constructors
		FormatException();
		FormatException(jstring arg0);
		FormatException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::nfc

