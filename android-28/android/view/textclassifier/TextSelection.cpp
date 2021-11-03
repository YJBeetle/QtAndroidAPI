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
	
	// QAndroidJniObject forward
	TextSelection::TextSelection(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextSelection::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat TextSelection::getConfidenceScore(JString arg0)
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	JString TextSelection::getEntity(jint arg0)
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint TextSelection::getEntityCount()
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	JString TextSelection::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jint TextSelection::getSelectionEndIndex()
	{
		return callMethod<jint>(
			"getSelectionEndIndex",
			"()I"
		);
	}
	jint TextSelection::getSelectionStartIndex()
	{
		return callMethod<jint>(
			"getSelectionStartIndex",
			"()I"
		);
	}
	JString TextSelection::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextSelection::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

