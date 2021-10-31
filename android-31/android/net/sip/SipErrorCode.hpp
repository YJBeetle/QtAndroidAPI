#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::sip
{
	class SipErrorCode : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLIENT_ERROR();
		static jint CROSS_DOMAIN_AUTHENTICATION();
		static jint DATA_CONNECTION_LOST();
		static jint INVALID_CREDENTIALS();
		static jint INVALID_REMOTE_URI();
		static jint IN_PROGRESS();
		static jint NO_ERROR();
		static jint PEER_NOT_REACHABLE();
		static jint SERVER_ERROR();
		static jint SERVER_UNREACHABLE();
		static jint SOCKET_ERROR();
		static jint TIME_OUT();
		static jint TRANSACTION_TERMINTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipErrorCode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SipErrorCode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace android::net::sip
