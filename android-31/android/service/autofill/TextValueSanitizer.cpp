#include "../../os/Parcel.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./TextValueSanitizer.hpp"

namespace android::service::autofill
{
	// Fields
	__JniBaseClass TextValueSanitizer::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.TextValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextValueSanitizer::TextValueSanitizer(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextValueSanitizer::TextValueSanitizer(java::util::regex::Pattern arg0, jstring arg1)
		: __JniBaseClass(
			"android.service.autofill.TextValueSanitizer",
			"(Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint TextValueSanitizer::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextValueSanitizer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

