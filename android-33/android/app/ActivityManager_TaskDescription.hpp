#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_TaskDescription.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ActivityManager_TaskDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$TaskDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ActivityManager_TaskDescription::ActivityManager_TaskDescription()
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"()V"
		) {}
	inline ActivityManager_TaskDescription::ActivityManager_TaskDescription(android::app::ActivityManager_TaskDescription &arg0)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.object()
		) {}
	inline ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, android::graphics::Bitmap arg1)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, jint arg1)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, android::graphics::Bitmap arg1, jint arg2)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		) {}
	inline ActivityManager_TaskDescription::ActivityManager_TaskDescription(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.app.ActivityManager$TaskDescription",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint ActivityManager_TaskDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ActivityManager_TaskDescription::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ActivityManager_TaskDescription::getBackgroundColor() const
	{
		return callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	inline android::graphics::Bitmap ActivityManager_TaskDescription::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JString ActivityManager_TaskDescription::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	inline jint ActivityManager_TaskDescription::getNavigationBarColor() const
	{
		return callMethod<jint>(
			"getNavigationBarColor",
			"()I"
		);
	}
	inline jint ActivityManager_TaskDescription::getPrimaryColor() const
	{
		return callMethod<jint>(
			"getPrimaryColor",
			"()I"
		);
	}
	inline jint ActivityManager_TaskDescription::getStatusBarColor() const
	{
		return callMethod<jint>(
			"getStatusBarColor",
			"()I"
		);
	}
	inline void ActivityManager_TaskDescription::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline JString ActivityManager_TaskDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ActivityManager_TaskDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
