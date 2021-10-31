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
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketKeepalive(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SocketKeepalive(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void start(jint arg0);
		void stop();
	};
} // namespace android::net

