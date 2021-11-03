#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AutofillId.hpp"

namespace android::view::autofill
{
	// Fields
	JObject AutofillId::CREATOR()
	{
		return getStaticObjectField(
			"android.view.autofill.AutofillId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AutofillId::AutofillId(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AutofillId::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutofillId::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AutofillId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AutofillId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AutofillId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::autofill

