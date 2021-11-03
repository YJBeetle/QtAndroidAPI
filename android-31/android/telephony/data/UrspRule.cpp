#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UrspRule.hpp"

namespace android::telephony::data
{
	// Fields
	JObject UrspRule::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.UrspRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UrspRule::UrspRule(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UrspRule::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UrspRule::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint UrspRule::getPrecedence() const
	{
		return callMethod<jint>(
			"getPrecedence",
			"()I"
		);
	}
	JObject UrspRule::getRouteSelectionDescriptor() const
	{
		return callObjectMethod(
			"getRouteSelectionDescriptor",
			"()Ljava/util/List;"
		);
	}
	JObject UrspRule::getTrafficDescriptors() const
	{
		return callObjectMethod(
			"getTrafficDescriptors",
			"()Ljava/util/List;"
		);
	}
	jint UrspRule::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString UrspRule::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UrspRule::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

