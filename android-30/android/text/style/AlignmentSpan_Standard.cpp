#include "../../os/Parcel.hpp"
#include "../Layout_Alignment.hpp"
#include "./AlignmentSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	AlignmentSpan_Standard::AlignmentSpan_Standard(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlignmentSpan_Standard::AlignmentSpan_Standard(android::os::Parcel arg0)
		: JObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	AlignmentSpan_Standard::AlignmentSpan_Standard(android::text::Layout_Alignment arg0)
		: JObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/text/Layout$Alignment;)V",
			arg0.object()
		) {}
	
	// Methods
	jint AlignmentSpan_Standard::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::text::Layout_Alignment AlignmentSpan_Standard::getAlignment()
	{
		return callObjectMethod(
			"getAlignment",
			"()Landroid/text/Layout$Alignment;"
		);
	}
	jint AlignmentSpan_Standard::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void AlignmentSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

