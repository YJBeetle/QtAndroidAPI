#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_TaskDescription.hpp"

namespace android::app
{
	// Fields
	JObject ActivityManager_TaskDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$TaskDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActivityManager_TaskDescription::ActivityManager_TaskDescription()
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"()V"
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(android::app::ActivityManager_TaskDescription &arg0)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.object()
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, android::graphics::Bitmap arg1)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, jint arg1)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, android::graphics::Bitmap arg1, jint arg2)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		) {}
	ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint ActivityManager_TaskDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Bitmap ActivityManager_TaskDescription::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	JString ActivityManager_TaskDescription::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	jint ActivityManager_TaskDescription::getPrimaryColor() const
	{
		return callMethod<jint>(
			"getPrimaryColor",
			"()I"
		);
	}
	void ActivityManager_TaskDescription::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	JString ActivityManager_TaskDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ActivityManager_TaskDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

