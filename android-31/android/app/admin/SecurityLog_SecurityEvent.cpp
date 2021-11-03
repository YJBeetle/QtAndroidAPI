#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "./SecurityLog_SecurityEvent.hpp"

namespace android::app::admin
{
	// Fields
	JObject SecurityLog_SecurityEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.SecurityLog$SecurityEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SecurityLog_SecurityEvent::SecurityLog_SecurityEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SecurityLog_SecurityEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SecurityLog_SecurityEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject SecurityLog_SecurityEvent::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
	}
	jlong SecurityLog_SecurityEvent::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jint SecurityLog_SecurityEvent::getLogLevel() const
	{
		return callMethod<jint>(
			"getLogLevel",
			"()I"
		);
	}
	jint SecurityLog_SecurityEvent::getTag() const
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jlong SecurityLog_SecurityEvent::getTimeNanos() const
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jint SecurityLog_SecurityEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SecurityLog_SecurityEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

