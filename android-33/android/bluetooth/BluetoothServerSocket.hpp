#pragma once

#include "./BluetoothSocket.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothServerSocket.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::bluetooth::BluetoothSocket BluetoothServerSocket::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Landroid/bluetooth/BluetoothSocket;"
		);
	}
	inline android::bluetooth::BluetoothSocket BluetoothServerSocket::accept(jint arg0) const
	{
		return callObjectMethod(
			"accept",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	inline void BluetoothServerSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint BluetoothServerSocket::getPsm() const
	{
		return callMethod<jint>(
			"getPsm",
			"()I"
		);
	}
	inline JString BluetoothServerSocket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
