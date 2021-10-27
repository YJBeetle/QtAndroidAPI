#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class ScanSettings;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanSettings_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setCallbackType(jint arg0);
		QAndroidJniObject setLegacy(jboolean arg0);
		QAndroidJniObject setMatchMode(jint arg0);
		QAndroidJniObject setNumOfMatches(jint arg0);
		QAndroidJniObject setPhy(jint arg0);
		QAndroidJniObject setReportDelay(jlong arg0);
		QAndroidJniObject setScanMode(jint arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "ScanSettings.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void ScanSettings_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanSettings$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ScanSettings_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanSettings;"
		);
	}
	QAndroidJniObject ScanSettings_Builder::setCallbackType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setCallbackType",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setLegacy(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLegacy",
			"(Z)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setMatchMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMatchMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setNumOfMatches(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setNumOfMatches",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setPhy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPhy",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setReportDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setReportDelay",
			"(J)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanSettings_Builder::setScanMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setScanMode",
			"(I)Landroid/bluetooth/le/ScanSettings$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanSettings_Builder : public __jni_impl::android::bluetooth::le::ScanSettings_Builder
	{
	public:
		ScanSettings_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ScanSettings_Builder()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

