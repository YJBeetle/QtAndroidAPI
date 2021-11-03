#include "../../os/Parcel.hpp"
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
	
	// QJniObject forward
	SecurityLog_SecurityEvent::SecurityLog_SecurityEvent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SecurityLog_SecurityEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SecurityLog_SecurityEvent::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject SecurityLog_SecurityEvent::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jlong SecurityLog_SecurityEvent::getId()
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jint SecurityLog_SecurityEvent::getLogLevel()
	{
		return callMethod<jint>(
			"getLogLevel",
			"()I"
		);
	}
	jint SecurityLog_SecurityEvent::getTag()
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jlong SecurityLog_SecurityEvent::getTimeNanos()
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jint SecurityLog_SecurityEvent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SecurityLog_SecurityEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

