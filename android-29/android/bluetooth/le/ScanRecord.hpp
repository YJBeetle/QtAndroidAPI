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
		jstring toString();
		jbyteArray getBytes();
		QAndroidJniObject getServiceUuids();
		QAndroidJniObject getManufacturerSpecificData();
		jbyteArray getManufacturerSpecificData(jint arg0);
		jint getTxPowerLevel();
		jint getAdvertiseFlags();
		QAndroidJniObject getServiceSolicitationUuids();
		jstring getDeviceName();
		QAndroidJniObject getServiceData();
		jbyteArray getServiceData(__jni_impl::android::os::ParcelUuid arg0);
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
	jstring ScanRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ScanRecord::getBytes()
	{
		return __thiz.callObjectMethod(
			"getBytes",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanRecord::getServiceUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ScanRecord::getManufacturerSpecificData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	jbyteArray ScanRecord::getManufacturerSpecificData(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jint ScanRecord::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jint ScanRecord::getAdvertiseFlags()
	{
		return __thiz.callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	QAndroidJniObject ScanRecord::getServiceSolicitationUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	jstring ScanRecord::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ScanRecord::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	jbyteArray ScanRecord::getServiceData(__jni_impl::android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.__jniObject().object()
		).object<jbyteArray>();
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

