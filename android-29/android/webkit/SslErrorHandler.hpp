#pragma once

#include "../os/Handler.hpp"

namespace android::webkit
{
	class SslErrorHandler : public android::os::Handler
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SslErrorHandler(const char *className, const char *sig, Ts...agv) : android::os::Handler(className, sig, std::forward<Ts>(agv)...) {}
		SslErrorHandler(QAndroidJniObject obj) : android::os::Handler(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		void proceed() const;
	};
} // namespace android::webkit

