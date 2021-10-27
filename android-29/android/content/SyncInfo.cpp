#include "../accounts/Account.hpp"
#include "../os/Parcel.hpp"
#include "./SyncInfo.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject SyncInfo::account()
	{
		return __thiz.getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	jstring SyncInfo::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong SyncInfo::startTime()
	{
		return __thiz.getField<jlong>(
			"startTime"
		);
	}
	
	SyncInfo::SyncInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SyncInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

