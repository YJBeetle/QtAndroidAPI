#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseSettings;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseSettings_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAdvertiseMode(jint arg0);
		QAndroidJniObject setConnectable(jboolean arg0);
		QAndroidJniObject setTimeout(jint arg0);
		QAndroidJniObject setTxPowerLevel(jint arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "AdvertiseSettings.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void AdvertiseSettings_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseSettings$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AdvertiseSettings_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseSettings;"
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setAdvertiseMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAdvertiseMode",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setConnectable(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setConnectable",
			"(Z)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setTimeout(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTimeout",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseSettings_Builder::setTxPowerLevel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTxPowerLevel",
			"(I)Landroid/bluetooth/le/AdvertiseSettings$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertiseSettings_Builder : public __jni_impl::android::bluetooth::le::AdvertiseSettings_Builder
	{
	public:
		AdvertiseSettings_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AdvertiseSettings_Builder()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

