#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class EasyConnectStatusCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint EASY_CONNECT_EVENT_FAILURE_AUTHENTICATION();
		static jint EASY_CONNECT_EVENT_FAILURE_BUSY();
		static jint EASY_CONNECT_EVENT_FAILURE_CANNOT_FIND_NETWORK();
		static jint EASY_CONNECT_EVENT_FAILURE_CONFIGURATION();
		static jint EASY_CONNECT_EVENT_FAILURE_ENROLLEE_AUTHENTICATION();
		static jint EASY_CONNECT_EVENT_FAILURE_ENROLLEE_FAILED_TO_SCAN_NETWORK_CHANNEL();
		static jint EASY_CONNECT_EVENT_FAILURE_ENROLLEE_REJECTED_CONFIGURATION();
		static jint EASY_CONNECT_EVENT_FAILURE_GENERIC();
		static jint EASY_CONNECT_EVENT_FAILURE_INVALID_NETWORK();
		static jint EASY_CONNECT_EVENT_FAILURE_INVALID_URI();
		static jint EASY_CONNECT_EVENT_FAILURE_NOT_COMPATIBLE();
		static jint EASY_CONNECT_EVENT_FAILURE_NOT_SUPPORTED();
		static jint EASY_CONNECT_EVENT_FAILURE_TIMEOUT();
		static jint EASY_CONNECT_EVENT_FAILURE_URI_GENERATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EasyConnectStatusCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EasyConnectStatusCallback(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

