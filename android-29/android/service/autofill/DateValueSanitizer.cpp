#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"
#include "./DateValueSanitizer.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject DateValueSanitizer::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.DateValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DateValueSanitizer::DateValueSanitizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateValueSanitizer::DateValueSanitizer(android::icu::text::DateFormat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.DateValueSanitizer",
			"(Landroid/icu/text/DateFormat;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint DateValueSanitizer::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DateValueSanitizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DateValueSanitizer::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

