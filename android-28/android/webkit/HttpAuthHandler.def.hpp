#pragma once

#include "../os/Handler.def.hpp"

class JString;

namespace android::webkit
{
	class HttpAuthHandler : public android::os::Handler
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HttpAuthHandler(const char *className, const char *sig, Ts...agv) : android::os::Handler(className, sig, std::forward<Ts>(agv)...) {}
		HttpAuthHandler(QJniObject obj) : android::os::Handler(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		void proceed(JString arg0, JString arg1) const;
		jboolean useHttpAuthUsernamePassword() const;
	};
} // namespace android::webkit

