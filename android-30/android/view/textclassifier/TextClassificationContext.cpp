#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./TextClassificationContext.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassificationContext::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassificationContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextClassificationContext::TextClassificationContext(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassificationContext::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString TextClassificationContext::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString TextClassificationContext::getWidgetType()
	{
		return callObjectMethod(
			"getWidgetType",
			"()Ljava/lang/String;"
		);
	}
	JString TextClassificationContext::getWidgetVersion()
	{
		return callObjectMethod(
			"getWidgetVersion",
			"()Ljava/lang/String;"
		);
	}
	JString TextClassificationContext::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextClassificationContext::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

