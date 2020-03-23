#pragma once

#ifndef ANDROID_MTP_MTPDEVICEINFO
#define ANDROID_MTP_MTPDEVICEINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::mtp
{
	class MtpDeviceInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getVersion();
		QAndroidJniObject getManufacturer();
		QAndroidJniObject getOperationsSupported();
		QAndroidJniObject getEventsSupported();
		jboolean isOperationSupported(jint arg0);
		jboolean isEventSupported(jint arg0);
		QAndroidJniObject getModel();
		QAndroidJniObject getSerialNumber();
	};
} // namespace __jni_impl::android::mtp


namespace __jni_impl::android::mtp
{
	// Fields
	
	// Constructors
	void MtpDeviceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpDeviceInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MtpDeviceInfo::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MtpDeviceInfo::getManufacturer()
	{
		return __thiz.callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MtpDeviceInfo::getOperationsSupported()
	{
		return __thiz.callObjectMethod(
			"getOperationsSupported",
			"()[I");
	}
	QAndroidJniObject MtpDeviceInfo::getEventsSupported()
	{
		return __thiz.callObjectMethod(
			"getEventsSupported",
			"()[I");
	}
	jboolean MtpDeviceInfo::isOperationSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOperationSupported",
			"(I)Z",
			arg0);
	}
	jboolean MtpDeviceInfo::isEventSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEventSupported",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject MtpDeviceInfo::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MtpDeviceInfo::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::mtp

namespace android::mtp
{
	class MtpDeviceInfo : public __jni_impl::android::mtp::MtpDeviceInfo
	{
	public:
		MtpDeviceInfo(QAndroidJniObject obj) { __thiz = obj; }
		MtpDeviceInfo()
		{
			__constructor();
		}
	};
} // namespace android::mtp

#endif // ANDROID_MTP_MTPDEVICEINFO

