#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "./TextClassification_Request.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassification_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassification$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextClassification_Request::TextClassification_Request(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassification_Request::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextClassification_Request::getCallingPackageName()
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TextClassification_Request::getDefaultLocales()
	{
		return callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint TextClassification_Request::getEndIndex()
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	QAndroidJniObject TextClassification_Request::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject TextClassification_Request::getReferenceTime()
	{
		return callObjectMethod(
			"getReferenceTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	jint TextClassification_Request::getStartIndex()
	{
		return callMethod<jint>(
			"getStartIndex",
			"()I"
		);
	}
	jstring TextClassification_Request::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TextClassification_Request::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

