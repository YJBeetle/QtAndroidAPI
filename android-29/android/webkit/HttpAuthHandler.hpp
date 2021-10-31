#pragma once

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"


namespace android::webkit
{
	class HttpAuthHandler : public android::os::Handler
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HttpAuthHandler(const char *className, const char *sig, Ts...agv) : android::os::Handler(className, sig, std::forward<Ts>(agv)...) {}
		HttpAuthHandler(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		void proceed(jstring arg0, jstring arg1);
		jboolean useHttpAuthUsernamePassword();
	};
} // namespace android::webkit

