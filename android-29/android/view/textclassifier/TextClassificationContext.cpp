#include "../../os/Parcel.hpp"
#include "./TextClassificationContext.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassificationContext::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassificationContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextClassificationContext::TextClassificationContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassificationContext::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextClassificationContext::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassificationContext::getWidgetType()
	{
		return callObjectMethod(
			"getWidgetType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassificationContext::getWidgetVersion()
	{
		return callObjectMethod(
			"getWidgetVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassificationContext::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

