#pragma once

#include "../../JObject.hpp"
#include "../os/Handler.hpp"


namespace android::webkit
{
	class SslErrorHandler : public android::os::Handler
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SslErrorHandler(const char *className, const char *sig, Ts...agv) : android::os::Handler(className, sig, std::forward<Ts>(agv)...) {}
		SslErrorHandler(QJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		void proceed();
	};
} // namespace android::webkit

