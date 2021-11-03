#include "./EasyConnectStatusCallback.hpp"

namespace android::net::wifi
{
	// Fields
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_AUTHENTICATION"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_BUSY()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_BUSY"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_CANNOT_FIND_NETWORK()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_CANNOT_FIND_NETWORK"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_CONFIGURATION"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_ENROLLEE_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_ENROLLEE_AUTHENTICATION"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_ENROLLEE_FAILED_TO_SCAN_NETWORK_CHANNEL()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_ENROLLEE_FAILED_TO_SCAN_NETWORK_CHANNEL"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_ENROLLEE_REJECTED_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_ENROLLEE_REJECTED_CONFIGURATION"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_GENERIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_GENERIC"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_INVALID_NETWORK()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_INVALID_NETWORK"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_INVALID_URI()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_INVALID_URI"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_NOT_COMPATIBLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_NOT_COMPATIBLE"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_NOT_SUPPORTED"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_TIMEOUT"
		);
	}
	jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_URI_GENERATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_URI_GENERATION"
		);
	}
	
	// QJniObject forward
	EasyConnectStatusCallback::EasyConnectStatusCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

