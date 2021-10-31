#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "./TextSelection_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass TextSelection_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextSelection$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextSelection_Request::TextSelection_Request(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TextSelection_Request::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextSelection_Request::getCallingPackageName()
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::LocaleList TextSelection_Request::getDefaultLocales()
	{
		return callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint TextSelection_Request::getEndIndex()
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	android::os::Bundle TextSelection_Request::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint TextSelection_Request::getStartIndex()
	{
		return callMethod<jint>(
			"getStartIndex",
			"()I"
		);
	}
	jstring TextSelection_Request::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean TextSelection_Request::shouldIncludeTextClassification()
	{
		return callMethod<jboolean>(
			"shouldIncludeTextClassification",
			"()Z"
		);
	}
	void TextSelection_Request::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

