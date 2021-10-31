#include "../../content/Context.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./TextAppearanceSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TextAppearanceSpan::TextAppearanceSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
	
	// Constructors
	TextAppearanceSpan::TextAppearanceSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	TextAppearanceSpan::TextAppearanceSpan(android::content::Context arg0, jint arg1)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	TextAppearanceSpan::TextAppearanceSpan(android::content::Context arg0, jint arg1, jint arg2)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	TextAppearanceSpan::TextAppearanceSpan(jstring arg0, jint arg1, jint arg2, android::content::res::ColorStateList arg3, android::content::res::ColorStateList arg4)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Ljava/lang/String;IILandroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	
	// Methods
	jint TextAppearanceSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextAppearanceSpan::getFamily()
	{
		return callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::res::ColorStateList TextAppearanceSpan::getLinkTextColor()
	{
		return callObjectMethod(
			"getLinkTextColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextAppearanceSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	android::content::res::ColorStateList TextAppearanceSpan::getTextColor()
	{
		return callObjectMethod(
			"getTextColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextAppearanceSpan::getTextSize()
	{
		return callMethod<jint>(
			"getTextSize",
			"()I"
		);
	}
	jint TextAppearanceSpan::getTextStyle()
	{
		return callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	void TextAppearanceSpan::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void TextAppearanceSpan::updateMeasureState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void TextAppearanceSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

