#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ServiceInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony::mbms
{
	class FileServiceInfo : public __jni_impl::android::telephony::mbms::ServiceInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getFiles();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	QAndroidJniObject FileServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.mbms.FileServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void FileServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.FileServiceInfo",
			"(V)V");
	}
	
	// Methods
	jint FileServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject FileServiceInfo::getFiles()
	{
		return __thiz.callObjectMethod(
			"getFiles",
			"()Ljava/util/List;"
		);
	}
	void FileServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class FileServiceInfo : public __jni_impl::android::telephony::mbms::FileServiceInfo
	{
	public:
		FileServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		FileServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

