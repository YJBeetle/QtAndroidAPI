#pragma once

#include "../os/Handler.hpp"

class JString;

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
		void proceed(JString arg0, JString arg1);
		jboolean useHttpAuthUsernamePassword();
	};
} // namespace android::webkit

