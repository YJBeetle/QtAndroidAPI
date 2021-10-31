#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_TaskDescription.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass ActivityManager_TaskDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$TaskDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActivityManager_TaskDescription::ActivityManager_TaskDescription()
		: __JniBaseClass(
			"android.app.ActivityManager$TaskDescription",
			"()V"
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(android::app::ActivityManager_TaskDescription &arg0)
		: __JniBaseClass(
			"android.app.ActivityManager$TaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.object()
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0)
		: __JniBaseClass(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1)
		: __JniBaseClass(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0,
			arg1.object()
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1, jint arg2)
		: __JniBaseClass(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;I)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(jstring arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint ActivityManager_TaskDescription::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Bitmap ActivityManager_TaskDescription::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jstring ActivityManager_TaskDescription::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_TaskDescription::getPrimaryColor()
	{
		return callMethod<jint>(
			"getPrimaryColor",
			"()I"
		);
	}
	void ActivityManager_TaskDescription::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	jstring ActivityManager_TaskDescription::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ActivityManager_TaskDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

