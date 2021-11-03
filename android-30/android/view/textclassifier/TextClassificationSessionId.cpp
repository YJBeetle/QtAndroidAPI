#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TextClassificationSessionId.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassificationSessionId::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassificationSessionId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextClassificationSessionId::TextClassificationSessionId(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassificationSessionId::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TextClassificationSessionId::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString TextClassificationSessionId::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	jint TextClassificationSessionId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TextClassificationSessionId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextClassificationSessionId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

