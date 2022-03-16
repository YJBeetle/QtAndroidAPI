#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::view
{
	class WindowManager_BadTokenException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowManager_BadTokenException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		WindowManager_BadTokenException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		WindowManager_BadTokenException();
		WindowManager_BadTokenException(JString arg0);
		
		// Methods
	};
} // namespace android::view

