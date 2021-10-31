#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class WindowManager_InvalidDisplayException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		WindowManager_InvalidDisplayException(QAndroidJniObject obj);
		// Constructors
		WindowManager_InvalidDisplayException();
		WindowManager_InvalidDisplayException(jstring arg0);
		
		// Methods
	};
} // namespace android::view

