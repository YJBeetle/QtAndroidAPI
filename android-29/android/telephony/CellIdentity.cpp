#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentity.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentity::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentity",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellIdentity::CellIdentity(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CellIdentity::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellIdentity::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString CellIdentity::getOperatorAlphaLong() const
	{
		return callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString CellIdentity::getOperatorAlphaShort() const
	{
		return callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint CellIdentity::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CellIdentity::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

