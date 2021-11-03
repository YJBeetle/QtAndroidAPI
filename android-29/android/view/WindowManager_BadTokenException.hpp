#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class WindowManager_BadTokenException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowManager_BadTokenException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		WindowManager_BadTokenException(QAndroidJniObject obj);
		
		// Constructors
		WindowManager_BadTokenException();
		WindowManager_BadTokenException(jstring arg0);
		
		// Methods
	};
} // namespace android::view

