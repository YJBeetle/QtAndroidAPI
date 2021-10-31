#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class WindowManager_BadTokenException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		WindowManager_BadTokenException(QAndroidJniObject obj);
		// Constructors
		WindowManager_BadTokenException();
		WindowManager_BadTokenException(jstring arg0);
		
		// Methods
	};
} // namespace android::view

