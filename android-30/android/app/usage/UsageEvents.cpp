#include "./UsageEvents_Event.hpp"
#include "../../os/Parcel.hpp"
#include "./UsageEvents.hpp"

namespace android::app::usage
{
	// Fields
	JObject UsageEvents::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.UsageEvents",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	UsageEvents::UsageEvents(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UsageEvents::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsageEvents::getNextEvent(android::app::usage::UsageEvents_Event arg0) const
	{
		return callMethod<jboolean>(
			"getNextEvent",
			"(Landroid/app/usage/UsageEvents$Event;)Z",
			arg0.object()
		);
	}
	jboolean UsageEvents::hasNextEvent() const
	{
		return callMethod<jboolean>(
			"hasNextEvent",
			"()Z"
		);
	}
	void UsageEvents::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

