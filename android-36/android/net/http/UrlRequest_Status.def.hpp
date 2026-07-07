#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class UrlRequest_Status : public JObject
	{
	public:
		// Fields
		static jint CONNECTING();
		static jint DOWNLOADING_PAC_FILE();
		static jint ESTABLISHING_PROXY_TUNNEL();
		static jint IDLE();
		static jint INVALID();
		static jint READING_RESPONSE();
		static jint RESOLVING_HOST();
		static jint RESOLVING_HOST_IN_PAC_FILE();
		static jint RESOLVING_PROXY_FOR_URL();
		static jint SENDING_REQUEST();
		static jint SSL_HANDSHAKE();
		static jint WAITING_FOR_AVAILABLE_SOCKET();
		static jint WAITING_FOR_CACHE();
		static jint WAITING_FOR_DELEGATE();
		static jint WAITING_FOR_RESPONSE();
		static jint WAITING_FOR_STALLED_SOCKET_POOL();
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlRequest_Status(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlRequest_Status(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::http

