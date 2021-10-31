#include "./PendingIntent.hpp"
#include "../os/Parcel.hpp"
#include "./AlarmManager_AlarmClockInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject AlarmManager_AlarmClockInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AlarmManager$AlarmClockInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AlarmManager_AlarmClockInfo::AlarmManager_AlarmClockInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AlarmManager_AlarmClockInfo::AlarmManager_AlarmClockInfo(jlong arg0, android::app::PendingIntent arg1)
		: __JniBaseClass(
			"android.app.AlarmManager$AlarmClockInfo",
			"(JLandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint AlarmManager_AlarmClockInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AlarmManager_AlarmClockInfo::getShowIntent()
	{
		return callObjectMethod(
			"getShowIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	jlong AlarmManager_AlarmClockInfo::getTriggerTime()
	{
		return callMethod<jlong>(
			"getTriggerTime",
			"()J"
		);
	}
	void AlarmManager_AlarmClockInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

