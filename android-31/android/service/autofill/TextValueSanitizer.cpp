#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./TextValueSanitizer.hpp"

namespace android::service::autofill
{
	// Fields
	JObject TextValueSanitizer::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.TextValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextValueSanitizer::TextValueSanitizer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextValueSanitizer::TextValueSanitizer(java::util::regex::Pattern arg0, JString arg1)
		: JObject(
			"android.service.autofill.TextValueSanitizer",
			"(Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint TextValueSanitizer::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString TextValueSanitizer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextValueSanitizer::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

