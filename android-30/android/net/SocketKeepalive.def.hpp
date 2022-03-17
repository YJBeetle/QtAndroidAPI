#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class SocketKeepalive : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketKeepalive(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SocketKeepalive(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void start(jint arg0) const;
		void stop() const;
	};
} // namespace android::net

