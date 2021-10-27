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
	
	UsageEvents::UsageEvents(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint UsageEvents::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UsageEvents::getNextEvent(android::app::usage::UsageEvents_Event arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getNextEvent",
			"(Landroid/app/usage/UsageEvents$Event;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean UsageEvents::hasNextEvent()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextEvent",
			"()Z"
		);
	}
	void UsageEvents::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::usage

