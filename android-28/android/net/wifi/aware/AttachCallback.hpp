#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::aware
{
	class WifiAwareSession;
}

namespace android::net::wifi::aware
{
	class AttachCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AttachCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AttachCallback(QJniObject obj);
		
		// Constructors
		AttachCallback();
		
		// Methods
		void onAttachFailed();
		void onAttached(android::net::wifi::aware::WifiAwareSession arg0);
	};
} // namespace android::net::wifi::aware

