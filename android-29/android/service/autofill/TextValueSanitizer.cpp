#include "../../os/Parcel.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./TextValueSanitizer.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject TextValueSanitizer::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.TextValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextValueSanitizer::TextValueSanitizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextValueSanitizer::TextValueSanitizer(java::util::regex::Pattern arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.TextValueSanitizer",
			"(Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint TextValueSanitizer::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextValueSanitizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextValueSanitizer::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

