#pragma once

#ifndef ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS_BUILDER
#define ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSetParameters;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSetParameters_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAnonymous(jboolean arg0);
		QAndroidJniObject setConnectable(jboolean arg0);
		QAndroidJniObject setIncludeTxPower(jboolean arg0);
		QAndroidJniObject setInterval(jint arg0);
		QAndroidJniObject setLegacyMode(jboolean arg0);
		QAndroidJniObject setPrimaryPhy(jint arg0);
		QAndroidJniObject setScannable(jboolean arg0);
		QAndroidJniObject setSecondaryPhy(jint arg0);
		QAndroidJniObject setTxPowerLevel(jint arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "AdvertisingSetParameters.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void AdvertisingSetParameters_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertisingSetParameters$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AdvertisingSetParameters_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertisingSetParameters;"
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setAnonymous(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAnonymous",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setConnectable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setIncludeTxPower(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setInterval(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setLegacyMode(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLegacyMode",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setPrimaryPhy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPrimaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setScannable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setScannable",
			"(Z)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setSecondaryPhy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSecondaryPhy",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertisingSetParameters_Builder::setTxPowerLevel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertisingSetParameters$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertisingSetParameters_Builder : public __jni_impl::android::bluetooth::le::AdvertisingSetParameters_Builder
	{
	public:
		AdvertisingSetParameters_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AdvertisingSetParameters_Builder()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS_BUILDER

