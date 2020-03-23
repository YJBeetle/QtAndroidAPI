#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_MBMSERRORS_DOWNLOADERRORS
#define ANDROID_TELEPHONY_MBMS_MBMSERRORS_DOWNLOADERRORS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsErrors_DownloadErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT();
		static jint ERROR_UNKNOWN_DOWNLOAD_REQUEST();
		static jint ERROR_UNKNOWN_FILE_INFO();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint MbmsErrors_DownloadErrors::ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT");
	}
	jint MbmsErrors_DownloadErrors::ERROR_UNKNOWN_DOWNLOAD_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_UNKNOWN_DOWNLOAD_REQUEST");
	}
	jint MbmsErrors_DownloadErrors::ERROR_UNKNOWN_FILE_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"ERROR_UNKNOWN_FILE_INFO");
	}
	
	// Constructors
	void MbmsErrors_DownloadErrors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsErrors$DownloadErrors",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsErrors_DownloadErrors : public __jni_impl::android::telephony::mbms::MbmsErrors_DownloadErrors
	{
	public:
		MbmsErrors_DownloadErrors(QAndroidJniObject obj) { __thiz = obj; }
		MbmsErrors_DownloadErrors()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_MBMSERRORS_DOWNLOADERRORS

