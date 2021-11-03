#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::p2p
{
	class WifiP2pManager_Channel : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pManager_Channel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pManager_Channel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
	};
} // namespace android::net::wifi::p2p

