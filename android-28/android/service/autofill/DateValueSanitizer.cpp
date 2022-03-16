#include "../../icu/text/DateFormat.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	
	// Constructors
	DateValueSanitizer::DateValueSanitizer(android::icu::text::DateFormat arg0)
		: JObject(
			"android.service.autofill.DateValueSanitizer",
			"(Landroid/icu/text/DateFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	jint DateValueSanitizer::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DateValueSanitizer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DateValueSanitizer::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

