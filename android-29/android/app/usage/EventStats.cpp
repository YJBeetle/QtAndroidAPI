#include "../../os/Parcel.hpp"
#include "./EventStats.hpp"

namespace android::app::usage
{
	// Fields
	QAndroidJniObject EventStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.EventStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	EventStats::EventStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EventStats::EventStats(android::app::usage::EventStats &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.EventStats",
			"(Landroid/app/usage/EventStats;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void EventStats::add(android::app::usage::EventStats arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/app/usage/EventStats;)V",
			arg0.__jniObject().object()
		);
	}
	jint EventStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint EventStats::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jint EventStats::getEventType()
	{
		return __thiz.callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jlong EventStats::getFirstTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong EventStats::getLastEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getLastEventTime",
			"()J"
		);
	}
	jlong EventStats::getLastTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong EventStats::getTotalTime()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTime",
			"()J"
		);
	}
	void EventStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::usage

