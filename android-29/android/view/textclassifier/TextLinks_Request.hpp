#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./TextClassifier_EntityConfig.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_Request.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextLinks_Request::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLinks$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextLinks_Request::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TextLinks_Request::getCallingPackageName() const
	{
		return callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::LocaleList TextLinks_Request::getDefaultLocales() const
	{
		return callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline android::view::textclassifier::TextClassifier_EntityConfig TextLinks_Request::getEntityConfig() const
	{
		return callObjectMethod(
			"getEntityConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	inline android::os::Bundle TextLinks_Request::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString TextLinks_Request::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void TextLinks_Request::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

