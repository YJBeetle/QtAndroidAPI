#pragma once

#include "./BluetoothSocketSettings.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothSocketSettings_Builder.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	inline BluetoothSocketSettings_Builder::BluetoothSocketSettings_Builder()
		: JObject(
			"android.bluetooth.BluetoothSocketSettings$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::BluetoothSocketSettings BluetoothSocketSettings_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/BluetoothSocketSettings;"
		);
	}
	inline android::bluetooth::BluetoothSocketSettings_Builder BluetoothSocketSettings_Builder::setAuthenticationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setAuthenticationRequired",
			"(Z)Landroid/bluetooth/BluetoothSocketSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothSocketSettings_Builder BluetoothSocketSettings_Builder::setEncryptionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setEncryptionRequired",
			"(Z)Landroid/bluetooth/BluetoothSocketSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothSocketSettings_Builder BluetoothSocketSettings_Builder::setL2capPsm(jint arg0) const
	{
		return callObjectMethod(
			"setL2capPsm",
			"(I)Landroid/bluetooth/BluetoothSocketSettings$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothSocketSettings_Builder BluetoothSocketSettings_Builder::setRfcommServiceName(JString arg0) const
	{
		return callObjectMethod(
			"setRfcommServiceName",
			"(Ljava/lang/String;)Landroid/bluetooth/BluetoothSocketSettings$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::bluetooth::BluetoothSocketSettings_Builder BluetoothSocketSettings_Builder::setRfcommUuid(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"setRfcommUuid",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocketSettings$Builder;",
			arg0.object()
		);
	}
	inline android::bluetooth::BluetoothSocketSettings_Builder BluetoothSocketSettings_Builder::setSocketType(jint arg0) const
	{
		return callObjectMethod(
			"setSocketType",
			"(I)Landroid/bluetooth/BluetoothSocketSettings$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
