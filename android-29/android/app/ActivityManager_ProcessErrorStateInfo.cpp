#include "../os/Parcel.hpp"
#include "./ActivityManager_ProcessErrorStateInfo.hpp"

namespace android::app
{
	// Fields
	jint ActivityManager_ProcessErrorStateInfo::CRASHED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CRASHED"
		);
	}
	JObject ActivityManager_ProcessErrorStateInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::NOT_RESPONDING()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NOT_RESPONDING"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::NO_ERROR()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NO_ERROR"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::condition()
	{
		return getField<jint>(
			"condition"
		);
	}
	jbyteArray ActivityManager_ProcessErrorStateInfo::crashData()
	{
		return getObjectField(
			"crashData",
			"[B"
		).object<jbyteArray>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::longMsg()
	{
		return getObjectField(
			"longMsg",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_ProcessErrorStateInfo::pid()
	{
		return getField<jint>(
			"pid"
		);
	}
	jstring ActivityManager_ProcessErrorStateInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::shortMsg()
	{
		return getObjectField(
			"shortMsg",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::stackTrace()
	{
		return getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::tag()
	{
		return getObjectField(
			"tag",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_ProcessErrorStateInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_ProcessErrorStateInfo::ActivityManager_ProcessErrorStateInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActivityManager_ProcessErrorStateInfo::ActivityManager_ProcessErrorStateInfo()
		: JObject(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_ProcessErrorStateInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_ProcessErrorStateInfo::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_ProcessErrorStateInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

