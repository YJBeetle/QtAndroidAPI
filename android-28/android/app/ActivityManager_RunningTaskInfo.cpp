#include "../content/ComponentName.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_RunningTaskInfo.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass ActivityManager_RunningTaskInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RunningTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::content::ComponentName ActivityManager_RunningTaskInfo::baseActivity()
	{
		return getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;"
		);
	}
	jstring ActivityManager_RunningTaskInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ActivityManager_RunningTaskInfo::id()
	{
		return getField<jint>(
			"id"
		);
	}
	jint ActivityManager_RunningTaskInfo::numActivities()
	{
		return getField<jint>(
			"numActivities"
		);
	}
	jint ActivityManager_RunningTaskInfo::numRunning()
	{
		return getField<jint>(
			"numRunning"
		);
	}
	android::graphics::Bitmap ActivityManager_RunningTaskInfo::thumbnail()
	{
		return getObjectField(
			"thumbnail",
			"Landroid/graphics/Bitmap;"
		);
	}
	android::content::ComponentName ActivityManager_RunningTaskInfo::topActivity()
	{
		return getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo()
		: __JniBaseClass(
			"android.app.ActivityManager$RunningTaskInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_RunningTaskInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningTaskInfo::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RunningTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app
