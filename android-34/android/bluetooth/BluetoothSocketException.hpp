#pragma once

#include "../../JString.hpp"
#include "./BluetoothSocketException.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothSocketException::BLUETOOTH_OFF_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"BLUETOOTH_OFF_FAILURE"
		);
	}
	inline jint BluetoothSocketException::L2CAP_ACL_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_ACL_FAILURE"
		);
	}
	inline jint BluetoothSocketException::L2CAP_CLIENT_SECURITY_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_CLIENT_SECURITY_FAILURE"
		);
	}
	inline jint BluetoothSocketException::L2CAP_INSUFFICIENT_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_INSUFFICIENT_AUTHENTICATION"
		);
	}
	inline jint BluetoothSocketException::L2CAP_INSUFFICIENT_AUTHORIZATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_INSUFFICIENT_AUTHORIZATION"
		);
	}
	inline jint BluetoothSocketException::L2CAP_INSUFFICIENT_ENCRYPTION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_INSUFFICIENT_ENCRYPTION"
		);
	}
	inline jint BluetoothSocketException::L2CAP_INSUFFICIENT_ENCRYPT_KEY_SIZE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_INSUFFICIENT_ENCRYPT_KEY_SIZE"
		);
	}
	inline jint BluetoothSocketException::L2CAP_INVALID_PARAMETERS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_INVALID_PARAMETERS"
		);
	}
	inline jint BluetoothSocketException::L2CAP_INVALID_SOURCE_CID()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_INVALID_SOURCE_CID"
		);
	}
	inline jint BluetoothSocketException::L2CAP_NO_PSM_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_NO_PSM_AVAILABLE"
		);
	}
	inline jint BluetoothSocketException::L2CAP_NO_RESOURCES()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_NO_RESOURCES"
		);
	}
	inline jint BluetoothSocketException::L2CAP_SOURCE_CID_ALREADY_ALLOCATED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_SOURCE_CID_ALREADY_ALLOCATED"
		);
	}
	inline jint BluetoothSocketException::L2CAP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_TIMEOUT"
		);
	}
	inline jint BluetoothSocketException::L2CAP_UNACCEPTABLE_PARAMETERS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_UNACCEPTABLE_PARAMETERS"
		);
	}
	inline jint BluetoothSocketException::L2CAP_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"L2CAP_UNKNOWN"
		);
	}
	inline jint BluetoothSocketException::NULL_DEVICE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"NULL_DEVICE"
		);
	}
	inline jint BluetoothSocketException::RPC_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"RPC_FAILURE"
		);
	}
	inline jint BluetoothSocketException::SOCKET_CLOSED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"SOCKET_CLOSED"
		);
	}
	inline jint BluetoothSocketException::SOCKET_CONNECTION_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"SOCKET_CONNECTION_FAILURE"
		);
	}
	inline jint BluetoothSocketException::SOCKET_MANAGER_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"SOCKET_MANAGER_FAILURE"
		);
	}
	inline jint BluetoothSocketException::UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocketException",
			"UNSPECIFIED"
		);
	}
	
	// Constructors
	inline BluetoothSocketException::BluetoothSocketException(jint arg0)
		: java::io::IOException(
			"android.bluetooth.BluetoothSocketException",
			"(I)V",
			arg0
		) {}
	inline BluetoothSocketException::BluetoothSocketException(jint arg0, JString arg1)
		: java::io::IOException(
			"android.bluetooth.BluetoothSocketException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint BluetoothSocketException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::bluetooth

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
