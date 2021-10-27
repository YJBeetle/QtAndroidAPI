#pragma once

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"


namespace android::webkit
{
	class HttpAuthHandler : public android::os::Handler
	{
	public:
		// Fields
		
		HttpAuthHandler(QAndroidJniObject obj);
		// Constructors
		HttpAuthHandler() = default;
		
		// Methods
		void cancel();
		void proceed(jstring arg0, jstring arg1);
		void proceed(const QString &arg0, const QString &arg1);
		jboolean useHttpAuthUsernamePassword();
	};
} // namespace android::webkit

