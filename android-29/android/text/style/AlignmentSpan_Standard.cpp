#include "../../os/Parcel.hpp"
#include "../Layout_Alignment.hpp"
#include "./AlignmentSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	AlignmentSpan_Standard::AlignmentSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlignmentSpan_Standard::AlignmentSpan_Standard(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	AlignmentSpan_Standard::AlignmentSpan_Standard(android::text::Layout_Alignment &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.AlignmentSpan$Standard",
			"(Landroid/text/Layout$Alignment;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint AlignmentSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AlignmentSpan_Standard::getAlignment()
	{
		return __thiz.callObjectMethod(
			"getAlignment",
			"()Landroid/text/Layout$Alignment;"
		);
	}
	jint AlignmentSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void AlignmentSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

