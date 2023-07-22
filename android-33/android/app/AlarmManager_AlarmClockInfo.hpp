#pragma once

#include "./PendingIntent.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./AlarmManager_AlarmClockInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject AlarmManager_AlarmClockInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AlarmManager$AlarmClockInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AlarmManager_AlarmClockInfo::AlarmManager_AlarmClockInfo(jlong arg0, android::app::PendingIntent arg1)
		: JObject(
			"android.app.AlarmManager$AlarmClockInfo",
			"(JLandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint AlarmManager_AlarmClockInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::PendingIntent AlarmManager_AlarmClockInfo::getShowIntent() const
	{
		return callObjectMethod(
			"getShowIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline jlong AlarmManager_AlarmClockInfo::getTriggerTime() const
	{
		return callMethod<jlong>(
			"getTriggerTime",
			"()J"
		);
	}
	inline void AlarmManager_AlarmClockInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
