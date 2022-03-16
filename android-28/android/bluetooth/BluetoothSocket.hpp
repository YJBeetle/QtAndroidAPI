#pragma once

#include "./BluetoothDevice.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "./BluetoothSocket.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothSocket::TYPE_L2CAP()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_L2CAP"
		);
	}
	inline jint BluetoothSocket::TYPE_RFCOMM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_RFCOMM"
		);
	}
	inline jint BluetoothSocket::TYPE_SCO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_SCO"
		);
	}
	
	// Constructors
	
	// Methods
	inline void BluetoothSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void BluetoothSocket::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline jint BluetoothSocket::getConnectionType() const
	{
		return callMethod<jint>(
			"getConnectionType",
			"()I"
		);
	}
	inline java::io::InputStream BluetoothSocket::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline jint BluetoothSocket::getMaxReceivePacketSize() const
	{
		return callMethod<jint>(
			"getMaxReceivePacketSize",
			"()I"
		);
	}
	inline jint BluetoothSocket::getMaxTransmitPacketSize() const
	{
		return callMethod<jint>(
			"getMaxTransmitPacketSize",
			"()I"
		);
	}
	inline java::io::OutputStream BluetoothSocket::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline android::bluetooth::BluetoothDevice BluetoothSocket::getRemoteDevice() const
	{
		return callObjectMethod(
			"getRemoteDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	inline jboolean BluetoothSocket::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::bluetooth

// Base class headers

