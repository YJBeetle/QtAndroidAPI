#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../../os/Parcel.hpp"
#include "./LineHeightSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	LineHeightSpan_Standard::LineHeightSpan_Standard(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LineHeightSpan_Standard::LineHeightSpan_Standard(android::os::Parcel arg0)
		: JObject(
			"android.text.style.LineHeightSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	LineHeightSpan_Standard::LineHeightSpan_Standard(jint arg0)
		: JObject(
			"android.text.style.LineHeightSpan$Standard",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void LineHeightSpan_Standard::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5)
	{
		callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	jint LineHeightSpan_Standard::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint LineHeightSpan_Standard::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint LineHeightSpan_Standard::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LineHeightSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

