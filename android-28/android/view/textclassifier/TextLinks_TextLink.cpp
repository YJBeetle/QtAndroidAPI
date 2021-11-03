#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_TextLink.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextLinks_TextLink::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLinks$TextLink",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextLinks_TextLink::TextLinks_TextLink(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextLinks_TextLink::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat TextLinks_TextLink::getConfidenceScore(JString arg0)
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	jint TextLinks_TextLink::getEnd()
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	JString TextLinks_TextLink::getEntity(jint arg0)
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint TextLinks_TextLink::getEntityCount()
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	jint TextLinks_TextLink::getStart()
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	JString TextLinks_TextLink::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextLinks_TextLink::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

