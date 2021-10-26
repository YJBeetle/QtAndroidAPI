#pragma once

#ifndef ANDROID_MTP_MTPSTORAGEINFO
#define ANDROID_MTP_MTPSTORAGEINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::mtp
{
	class MtpStorageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getFreeSpace();
		jstring getDescription();
		jlong getMaxCapacity();
		jstring getVolumeIdentifier();
		jint getStorageId();
	};
} // namespace __jni_impl::android::mtp


namespace __jni_impl::android::mtp
{
	// Fields
	
	// Constructors
	void MtpStorageInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpStorageInfo",
			"(V)V");
	}
	
	// Methods
	jlong MtpStorageInfo::getFreeSpace()
	{
		return __thiz.callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	jstring MtpStorageInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong MtpStorageInfo::getMaxCapacity()
	{
		return __thiz.callMethod<jlong>(
			"getMaxCapacity",
			"()J"
		);
	}
	jstring MtpStorageInfo::getVolumeIdentifier()
	{
		return __thiz.callObjectMethod(
			"getVolumeIdentifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MtpStorageInfo::getStorageId()
	{
		return __thiz.callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
} // namespace __jni_impl::android::mtp

namespace android::mtp
{
	class MtpStorageInfo : public __jni_impl::android::mtp::MtpStorageInfo
	{
	public:
		MtpStorageInfo(QAndroidJniObject obj) { __thiz = obj; }
		MtpStorageInfo()
		{
			__constructor();
		}
	};
} // namespace android::mtp

#endif // ANDROID_MTP_MTPSTORAGEINFO

