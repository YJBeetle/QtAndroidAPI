#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextSelection.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass TextSelection::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextSelection",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextSelection::TextSelection(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TextSelection::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat TextSelection::getConfidenceScore(jstring arg0)
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jstring TextSelection::getEntity(jint arg0)
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint TextSelection::getEntityCount()
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	android::os::Bundle TextSelection::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring TextSelection::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring TextSelection::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

