#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_TaskDescription.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject ActivityManager_TaskDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$TaskDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityManager_TaskDescription::ActivityManager_TaskDescription()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"()V"
		);
	}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(android::app::ActivityManager_TaskDescription &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.__jniObject().object()
		);
	}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint ActivityManager_TaskDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ActivityManager_TaskDescription::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jstring ActivityManager_TaskDescription::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_TaskDescription::getPrimaryColor()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryColor",
			"()I"
		);
	}
	void ActivityManager_TaskDescription::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	jstring ActivityManager_TaskDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ActivityManager_TaskDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

