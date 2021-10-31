#include "../../os/Parcel.hpp"
#include "./EventStats.hpp"

namespace android::app::usage
{
	// Fields
	__JniBaseClass EventStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.EventStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	EventStats::EventStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EventStats::EventStats(android::app::usage::EventStats &arg0)
		: __JniBaseClass(
			"android.app.usage.EventStats",
			"(Landroid/app/usage/EventStats;)V",
			arg0.object()
		) {}
	
	// Methods
	void EventStats::add(android::app::usage::EventStats arg0)
	{
		callMethod<void>(
			"add",
			"(Landroid/app/usage/EventStats;)V",
			arg0.object()
		);
	}
	jint EventStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint EventStats::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jint EventStats::getEventType()
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jlong EventStats::getFirstTimeStamp()
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong EventStats::getLastEventTime()
	{
		return callMethod<jlong>(
			"getLastEventTime",
			"()J"
		);
	}
	jlong EventStats::getLastTimeStamp()
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong EventStats::getTotalTime()
	{
		return callMethod<jlong>(
			"getTotalTime",
			"()J"
		);
	}
	void EventStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

