#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextLinks_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLinks$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextLinks_Request::TextLinks_Request(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextLinks_Request::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString TextLinks_Request::getCallingPackageName()
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::os::LocaleList TextLinks_Request::getDefaultLocales()
	{
		return callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	android::view::textclassifier::TextClassifier_EntityConfig TextLinks_Request::getEntityConfig()
	{
		return callObjectMethod(
			"getEntityConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	android::os::Bundle TextLinks_Request::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString TextLinks_Request::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	void TextLinks_Request::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

