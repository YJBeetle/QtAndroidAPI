#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class SocketKeepalive_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
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

