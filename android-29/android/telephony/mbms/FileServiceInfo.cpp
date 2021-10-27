#include "../../os/Parcel.hpp"
#include "./FileServiceInfo.hpp"

namespace android::telephony::mbms
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
	
	FileServiceInfo::FileServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void FileServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

