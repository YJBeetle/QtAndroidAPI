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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowManager_InvalidDisplayException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		WindowManager_InvalidDisplayException(QAndroidJniObject obj);
		
		// Constructors
		WindowManager_InvalidDisplayException();
		WindowManager_InvalidDisplayException(jstring arg0);
		
		// Methods
	};
} // namespace android::view

