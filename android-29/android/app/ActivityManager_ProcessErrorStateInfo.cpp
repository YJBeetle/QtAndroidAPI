#include "../os/Parcel.hpp"
#include "./ActivityManager_ProcessErrorStateInfo.hpp"

namespace android::app
{
	// Fields
	jint ActivityManager_ProcessErrorStateInfo::CRASHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CRASHED"
		);
	}
	QAndroidJniObject ActivityManager_ProcessErrorStateInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::NOT_RESPONDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NOT_RESPONDING"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NO_ERROR"
		);
	}
	jint ActivityManager_ProcessErrorStateInfo::condition()
	{
		return __thiz.getField<jint>(
			"condition"
		);
	}
	jbyteArray ActivityManager_ProcessErrorStateInfo::crashData()
	{
		return __thiz.getObjectField(
			"crashData",
			"[B"
		).object<jbyteArray>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::longMsg()
	{
		return __thiz.getObjectField(
			"longMsg",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_ProcessErrorStateInfo::pid()
	{
		return __thiz.getField<jint>(
			"pid"
		);
	}
	jstring ActivityManager_ProcessErrorStateInfo::processName()
	{
		return __thiz.getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::shortMsg()
	{
		return __thiz.getObjectField(
			"shortMsg",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::stackTrace()
	{
		return __thiz.getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityManager_ProcessErrorStateInfo::tag()
	{
		return __thiz.getObjectField(
			"tag",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_ProcessErrorStateInfo::uid()
	{
		return __thiz.getField<jint>(
			"uid"
		);
	}
	
	ActivityManager_ProcessErrorStateInfo::ActivityManager_ProcessErrorStateInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityManager_ProcessErrorStateInfo::ActivityManager_ProcessErrorStateInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"()V"
		);
	}
	
	// Methods
	jint ActivityManager_ProcessErrorStateInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_ProcessErrorStateInfo::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ActivityManager_ProcessErrorStateInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

