#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class SocketKeepalive_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketKeepalive_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

