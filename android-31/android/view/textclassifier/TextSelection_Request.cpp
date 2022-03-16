#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TextSelection_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextSelection_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextSelection$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint TextSelection_Request::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString TextSelection_Request::getCallingPackageName() const
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::os::LocaleList TextSelection_Request::getDefaultLocales() const
	{
		return callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint TextSelection_Request::getEndIndex() const
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	android::os::Bundle TextSelection_Request::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint TextSelection_Request::getStartIndex() const
	{
		return callMethod<jint>(
			"getStartIndex",
			"()I"
		);
	}
	JString TextSelection_Request::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean TextSelection_Request::shouldIncludeTextClassification() const
	{
		return callMethod<jboolean>(
			"shouldIncludeTextClassification",
			"()Z"
		);
	}
	void TextSelection_Request::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

