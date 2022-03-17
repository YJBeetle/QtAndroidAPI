#pragma once

#include "./SocketKeepalive.def.hpp"

namespace android::net
{
	// Fields
	inline jint SocketKeepalive::ERROR_HARDWARE_ERROR()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_HARDWARE_ERROR"
		);
	}
	inline jint SocketKeepalive::ERROR_INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INSUFFICIENT_RESOURCES"
		);
	}
	inline jint SocketKeepalive::ERROR_INVALID_INTERVAL()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_INTERVAL"
		);
	}
	inline jint SocketKeepalive::ERROR_INVALID_IP_ADDRESS()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_IP_ADDRESS"
		);
	}
	inline jint SocketKeepalive::ERROR_INVALID_LENGTH()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_LENGTH"
		);
	}
	inline jint SocketKeepalive::ERROR_INVALID_NETWORK()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_NETWORK"
		);
	}
	inline jint SocketKeepalive::ERROR_INVALID_PORT()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_PORT"
		);
	}
	inline jint SocketKeepalive::ERROR_INVALID_SOCKET()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_SOCKET"
		);
	}
	inline jint SocketKeepalive::ERROR_SOCKET_NOT_IDLE()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_SOCKET_NOT_IDLE"
		);
	}
	inline jint SocketKeepalive::ERROR_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_UNSUPPORTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void SocketKeepalive::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SocketKeepalive::start(jint arg0) const
	{
		callMethod<void>(
			"start",
			"(I)V",
			arg0
		);
	}
	inline void SocketKeepalive::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::net

// Base class headers

