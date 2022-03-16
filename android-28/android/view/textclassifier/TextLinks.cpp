#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./TextLinks.hpp"

namespace android::view::textclassifier
{
	// Fields
	jint TextLinks::APPLY_STRATEGY_IGNORE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"APPLY_STRATEGY_IGNORE"
		);
	}
	jint TextLinks::APPLY_STRATEGY_REPLACE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"APPLY_STRATEGY_REPLACE"
		);
	}
	JObject TextLinks::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLinks",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TextLinks::STATUS_DIFFERENT_TEXT()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_DIFFERENT_TEXT"
		);
	}
	jint TextLinks::STATUS_LINKS_APPLIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_LINKS_APPLIED"
		);
	}
	jint TextLinks::STATUS_NO_LINKS_APPLIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_NO_LINKS_APPLIED"
		);
	}
	jint TextLinks::STATUS_NO_LINKS_FOUND()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_NO_LINKS_FOUND"
		);
	}
	
	// Constructors
	
	// Methods
	jint TextLinks::apply(JObject arg0, jint arg1, JObject arg2) const
	{
		return callMethod<jint>(
			"apply",
			"(Landroid/text/Spannable;ILjava/util/function/Function;)I",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jint TextLinks::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject TextLinks::getLinks() const
	{
		return callObjectMethod(
			"getLinks",
			"()Ljava/util/Collection;"
		);
	}
	JString TextLinks::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextLinks::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

