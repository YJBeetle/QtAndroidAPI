#pragma once

#ifndef ANDROID_BLUETOOTH_LE_SCANRECORD
#define ANDROID_BLUETOOTH_LE_SCANRECORD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::os
{
	class ParcelUuid;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getBytes();
		QAndroidJniObject getDeviceName();
		QAndroidJniObject getServiceData();
		QAndroidJniObject getServiceData(__jni_impl::android::os::ParcelUuid arg0);
		QAndroidJniObject getServiceUuids();
		QAndroidJniObject getManufacturerSpecificData(jint arg0);
		QAndroidJniObject getManufacturerSpecificData();
		jint getTxPowerLevel();
		jint getAdvertiseFlags();
		QAndroidJniObject getServiceSolicitationUuids();
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../util/SparseArray.hpp"
#include "../../os/ParcelUuid.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void ScanRecord::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanRecord",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ScanRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ScanRecord::getBytes()
	{
		return __thiz.callObjectMethod(
			"getBytes",
			"()[B");
	}
	QAndroidJniObject ScanRecord::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ScanRecord::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;");
	}
	QAndroidJniObject ScanRecord::getServiceData(__jni_impl::android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ScanRecord::getServiceUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;");
	}
	QAndroidJniObject ScanRecord::getManufacturerSpecificData(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0);
	}
	QAndroidJniObject ScanRecord::getManufacturerSpecificData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;");
	}
	jint ScanRecord::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I");
	}
	jint ScanRecord::getAdvertiseFlags()
	{
		return __thiz.callMethod<jint>(
			"getAdvertiseFlags",
			"()I");
	}
	QAndroidJniObject ScanRecord::getServiceSolicitationUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanRecord : public __jni_impl::android::bluetooth::le::ScanRecord
	{
	public:
		ScanRecord(QAndroidJniObject obj) { __thiz = obj; }
		ScanRecord()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_SCANRECORD

