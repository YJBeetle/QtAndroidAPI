#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	TextSelection_Request::TextSelection_Request(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextSelection_Request::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
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

