#include "../../os/Parcel.hpp"
#include "./StorageStats.hpp"

namespace android::app::usage
{
	// Fields
	QAndroidJniObject StorageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.StorageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	StorageStats::StorageStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint StorageStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong StorageStats::getAppBytes()
	{
		return __thiz.callMethod<jlong>(
			"getAppBytes",
			"()J"
		);
	}
	jlong StorageStats::getCacheBytes()
	{
		return __thiz.callMethod<jlong>(
			"getCacheBytes",
			"()J"
		);
	}
	jlong StorageStats::getDataBytes()
	{
		return __thiz.callMethod<jlong>(
			"getDataBytes",
			"()J"
		);
	}
	void StorageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::usage

