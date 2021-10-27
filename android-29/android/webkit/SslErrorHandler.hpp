#pragma once

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"


namespace android::webkit
{
	class SslErrorHandler : public android::os::Handler
	{
	public:
		// Fields
		
		SslErrorHandler(QAndroidJniObject obj);
		// Constructors
		SslErrorHandler() = default;
		
		// Methods
		void cancel();
		void proceed();
	};
} // namespace android::webkit

