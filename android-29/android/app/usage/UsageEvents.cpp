#include "./UsageEvents_Event.hpp"
#include "../../os/Parcel.hpp"
#include "./UsageEvents.hpp"

namespace android::app::usage
{
	// Fields
	QAndroidJniObject UsageEvents::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.UsageEvents",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsageEvents::UsageEvents(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UsageEvents::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsageEvents::getNextEvent(android::app::usage::UsageEvents_Event arg0)
	{
		return callMethod<jboolean>(
			"getNextEvent",
			"(Landroid/app/usage/UsageEvents$Event;)Z",
			arg0.object()
		);
	}
	jboolean UsageEvents::hasNextEvent()
	{
		return callMethod<jboolean>(
			"hasNextEvent",
			"()Z"
		);
	}
	void UsageEvents::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

