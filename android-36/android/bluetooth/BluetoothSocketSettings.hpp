#pragma once

#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothSocketSettings.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint BluetoothSocketSettings::getL2capPsm() const
	{
		return callMethod<jint>(
			"getL2capPsm",
			"()I"
		);
	}
	inline JString BluetoothSocketSettings::getRfcommServiceName() const
	{
		return callObjectMethod(
			"getRfcommServiceName",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::UUID BluetoothSocketSettings::getRfcommUuid() const
	{
		return callObjectMethod(
			"getRfcommUuid",
			"()Ljava/util/UUID;"
		);
	}
	inline jint BluetoothSocketSettings::getSocketType() const
	{
		return callMethod<jint>(
			"getSocketType",
			"()I"
		);
	}
	inline jboolean BluetoothSocketSettings::isAuthenticationRequired() const
	{
		return callMethod<jboolean>(
			"isAuthenticationRequired",
			"()Z"
		);
	}
	inline jboolean BluetoothSocketSettings::isEncryptionRequired() const
	{
		return callMethod<jboolean>(
			"isEncryptionRequired",
			"()Z"
		);
	}
	inline JString BluetoothSocketSettings::toString() const
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
