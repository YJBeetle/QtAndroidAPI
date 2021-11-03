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
	
	// QJniObject forward
	UrspRule::UrspRule(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint UrspRule::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UrspRule::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint UrspRule::getPrecedence()
	{
		return callMethod<jint>(
			"getPrecedence",
			"()I"
		);
	}
	JObject UrspRule::getRouteSelectionDescriptor()
	{
		return callObjectMethod(
			"getRouteSelectionDescriptor",
			"()Ljava/util/List;"
		);
	}
	JObject UrspRule::getTrafficDescriptors()
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
	JString UrspRule::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

