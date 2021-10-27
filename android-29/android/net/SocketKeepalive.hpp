#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class SocketKeepalive : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_HARDWARE_ERROR();
		static jint ERROR_INSUFFICIENT_RESOURCES();
		static jint ERROR_INVALID_INTERVAL();
		static jint ERROR_INVALID_IP_ADDRESS();
		static jint ERROR_INVALID_LENGTH();
		static jint ERROR_INVALID_NETWORK();
		static jint ERROR_INVALID_PORT();
		static jint ERROR_INVALID_SOCKET();
		static jint ERROR_SOCKET_NOT_IDLE();
		static jint ERROR_UNSUPPORTED();
		
		SocketKeepalive(QAndroidJniObject obj);
		// Constructors
		SocketKeepalive() = default;
		
		// Methods
		void close();
		void start(jint arg0);
		void stop();
	};
} // namespace android::net

