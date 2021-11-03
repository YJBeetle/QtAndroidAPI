#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net::wifi::p2p
{
	class WifiP2pManager;
}
namespace android::os
{
	class Binder;
}
namespace android::os
{
	class Looper;
}

namespace android::net::wifi::p2p
{
	class WifiP2pManager_Channel : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pManager_Channel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pManager_Channel(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
	};
} // namespace android::net::wifi::p2p

