#include "../../os/Parcel.hpp"
#include "./UrspRule.hpp"

namespace android::telephony::data
{
	// Fields
	__JniBaseClass UrspRule::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.UrspRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UrspRule::UrspRule(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UrspRule::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UrspRule::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint UrspRule::getPrecedence()
	{
		return callMethod<jint>(
			"getPrecedence",
			"()I"
		);
	}
	__JniBaseClass UrspRule::getRouteSelectionDescriptor()
	{
		return callObjectMethod(
			"getRouteSelectionDescriptor",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass UrspRule::getTrafficDescriptors()
	{
		return callObjectMethod(
			"getTrafficDescriptors",
			"()Ljava/util/List;"
		);
	}
	jint UrspRule::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UrspRule::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UrspRule::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

