#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"
#include "./DateValueSanitizer.hpp"

namespace android::service::autofill
{
	// Fields
	JObject DateValueSanitizer::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.DateValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DateValueSanitizer::DateValueSanitizer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateValueSanitizer::DateValueSanitizer(android::icu::text::DateFormat arg0)
		: JObject(
			"android.service.autofill.DateValueSanitizer",
			"(Landroid/icu/text/DateFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	jint DateValueSanitizer::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DateValueSanitizer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DateValueSanitizer::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

