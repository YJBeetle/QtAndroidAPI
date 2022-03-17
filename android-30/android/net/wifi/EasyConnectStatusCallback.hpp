#pragma once

#include "./EasyConnectStatusCallback.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_AUTHENTICATION"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_BUSY()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_BUSY"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_CANNOT_FIND_NETWORK()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_CANNOT_FIND_NETWORK"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_CONFIGURATION"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_ENROLLEE_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_ENROLLEE_AUTHENTICATION"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_ENROLLEE_REJECTED_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_ENROLLEE_REJECTED_CONFIGURATION"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_GENERIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_GENERIC"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_INVALID_NETWORK()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_INVALID_NETWORK"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_INVALID_URI()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_INVALID_URI"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_NOT_COMPATIBLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_NOT_COMPATIBLE"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_NOT_SUPPORTED"
		);
	}
	inline jint EasyConnectStatusCallback::EASY_CONNECT_EVENT_FAILURE_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.net.wifi.EasyConnectStatusCallback",
			"EASY_CONNECT_EVENT_FAILURE_TIMEOUT"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
