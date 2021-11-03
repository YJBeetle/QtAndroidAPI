#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AvailableNetworkInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject AvailableNetworkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.AvailableNetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AvailableNetworkInfo::PRIORITY_HIGH()
	{
		return getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_HIGH"
		);
	}
	jint AvailableNetworkInfo::PRIORITY_LOW()
	{
		return getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_LOW"
		);
	}
	jint AvailableNetworkInfo::PRIORITY_MED()
	{
		return getStaticField<jint>(
			"android.telephony.AvailableNetworkInfo",
			"PRIORITY_MED"
		);
	}
	
	// QJniObject forward
	AvailableNetworkInfo::AvailableNetworkInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AvailableNetworkInfo::AvailableNetworkInfo(jint arg0, jint arg1, JObject arg2, JObject arg3)
		: JObject(
			"android.telephony.AvailableNetworkInfo",
			"(IILjava/util/List;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	jint AvailableNetworkInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AvailableNetworkInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AvailableNetworkInfo::getBands() const
	{
		return callObjectMethod(
			"getBands",
			"()Ljava/util/List;"
		);
	}
	JObject AvailableNetworkInfo::getMccMncs() const
	{
		return callObjectMethod(
			"getMccMncs",
			"()Ljava/util/List;"
		);
	}
	jint AvailableNetworkInfo::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jint AvailableNetworkInfo::getSubId() const
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	jint AvailableNetworkInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AvailableNetworkInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AvailableNetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

