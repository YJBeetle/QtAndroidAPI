#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextLanguage_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextLanguage_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextLanguage$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextLanguage_Request::TextLanguage_Request(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint TextLanguage_Request::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextLanguage_Request::getCallingPackageName()
	{
		return __thiz.callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TextLanguage_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring TextLanguage_Request::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TextLanguage_Request::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

