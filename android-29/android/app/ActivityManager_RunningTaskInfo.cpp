#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_RunningTaskInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RunningTaskInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RunningTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ActivityManager_RunningTaskInfo::description()
	{
		return __thiz.getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ActivityManager_RunningTaskInfo::id()
	{
		return __thiz.getField<jint>(
			"id"
		);
	}
	jint ActivityManager_RunningTaskInfo::numRunning()
	{
		return __thiz.getField<jint>(
			"numRunning"
		);
	}
	QAndroidJniObject ActivityManager_RunningTaskInfo::thumbnail()
	{
		return __thiz.getObjectField(
			"thumbnail",
			"Landroid/graphics/Bitmap;"
		);
	}
	
	ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RunningTaskInfo",
			"()V"
		);
	}
	
	// Methods
	jint ActivityManager_RunningTaskInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningTaskInfo::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ActivityManager_RunningTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

