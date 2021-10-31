#include "../os/Parcel.hpp"
#include "./ClosedSubscriberGroupInfo.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass ClosedSubscriberGroupInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ClosedSubscriberGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ClosedSubscriberGroupInfo::ClosedSubscriberGroupInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ClosedSubscriberGroupInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ClosedSubscriberGroupInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring ClosedSubscriberGroupInfo::getHomeNodebName()
	{
		return callObjectMethod(
			"getHomeNodebName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ClosedSubscriberGroupInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ClosedSubscriberGroupInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

