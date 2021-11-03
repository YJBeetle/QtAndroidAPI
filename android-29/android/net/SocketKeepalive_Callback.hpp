#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class SocketKeepalive_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketKeepalive_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SocketKeepalive_Callback(QAndroidJniObject obj);
		
		// Constructors
		SocketKeepalive_Callback();
		
		// Methods
		void onDataReceived();
		void onError(jint arg0);
		void onStarted();
		void onStopped();
	};
} // namespace android::net

