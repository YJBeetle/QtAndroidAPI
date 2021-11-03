#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ClosedSubscriberGroupInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject ClosedSubscriberGroupInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ClosedSubscriberGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ClosedSubscriberGroupInfo::ClosedSubscriberGroupInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ClosedSubscriberGroupInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ClosedSubscriberGroupInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ClosedSubscriberGroupInfo::getCsgIdentity()
	{
		return callMethod<jint>(
			"getCsgIdentity",
			"()I"
		);
	}
	jboolean ClosedSubscriberGroupInfo::getCsgIndicator()
	{
		return callMethod<jboolean>(
			"getCsgIndicator",
			"()Z"
		);
	}
	JString ClosedSubscriberGroupInfo::getHomeNodebName()
	{
		return callObjectMethod(
			"getHomeNodebName",
			"()Ljava/lang/String;"
		);
	}
	jint ClosedSubscriberGroupInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ClosedSubscriberGroupInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ClosedSubscriberGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

