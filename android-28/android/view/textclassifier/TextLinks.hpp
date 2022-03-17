#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TextLinks.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline jint TextLinks::APPLY_STRATEGY_IGNORE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"APPLY_STRATEGY_IGNORE"
		);
	}
	inline jint TextLinks::APPLY_STRATEGY_REPLACE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"APPLY_STRATEGY_REPLACE"
		);
	}
	inline JObject TextLinks::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLinks",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TextLinks::STATUS_DIFFERENT_TEXT()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_DIFFERENT_TEXT"
		);
	}
	inline jint TextLinks::STATUS_LINKS_APPLIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_LINKS_APPLIED"
		);
	}
	inline jint TextLinks::STATUS_NO_LINKS_APPLIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_NO_LINKS_APPLIED"
		);
	}
	inline jint TextLinks::STATUS_NO_LINKS_FOUND()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_NO_LINKS_FOUND"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextLinks::apply(JObject arg0, jint arg1, JObject arg2) const
	{
		return callMethod<jint>(
			"apply",
			"(Landroid/text/Spannable;ILjava/util/function/Function;)I",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jint TextLinks::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject TextLinks::getLinks() const
	{
		return callObjectMethod(
			"getLinks",
			"()Ljava/util/Collection;"
		);
	}
	inline JString TextLinks::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextLinks::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
