#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class PeriodicAdvertisingParameters;
}

namespace __jni_impl::android::bluetooth::le
{
	class PeriodicAdvertisingParameters_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setIncludeTxPower(jboolean arg0);
		QAndroidJniObject setInterval(jint arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "./PeriodicAdvertisingParameters.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void PeriodicAdvertisingParameters_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.PeriodicAdvertisingParameters$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/PeriodicAdvertisingParameters;"
		);
	}
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::setIncludeTxPower(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeTxPower",
			"(Z)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
	QAndroidJniObject PeriodicAdvertisingParameters_Builder::setInterval(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setInterval",
			"(I)Landroid/bluetooth/le/PeriodicAdvertisingParameters$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters_Builder : public __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters_Builder
	{
	public:
		PeriodicAdvertisingParameters_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PeriodicAdvertisingParameters_Builder()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

