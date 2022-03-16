#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./TextSelection.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextSelection::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextSelection",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint TextSelection::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat TextSelection::getConfidenceScore(JString arg0) const
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	JString TextSelection::getEntity(jint arg0) const
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint TextSelection::getEntityCount() const
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	android::os::Bundle TextSelection::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString TextSelection::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jint TextSelection::getSelectionEndIndex() const
	{
		return callMethod<jint>(
			"getSelectionEndIndex",
			"()I"
		);
	}
	jint TextSelection::getSelectionStartIndex() const
	{
		return callMethod<jint>(
			"getSelectionStartIndex",
			"()I"
		);
	}
	JString TextSelection::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextSelection::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

