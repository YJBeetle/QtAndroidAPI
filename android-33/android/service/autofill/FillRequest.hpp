#pragma once

#include "../../content/IntentSender.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../view/inputmethod/InlineSuggestionsRequest.def.hpp"
#include "../../../JString.hpp"
#include "./FillRequest.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject FillRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint FillRequest::FLAG_COMPATIBILITY_MODE_REQUEST()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillRequest",
			"FLAG_COMPATIBILITY_MODE_REQUEST"
		);
	}
	inline jint FillRequest::FLAG_MANUAL_REQUEST()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillRequest",
			"FLAG_MANUAL_REQUEST"
		);
	}
	inline jint FillRequest::FLAG_SUPPORTS_FILL_DIALOG()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillRequest",
			"FLAG_SUPPORTS_FILL_DIALOG"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FillRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle FillRequest::getClientState() const
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::content::IntentSender FillRequest::getDelayedFillIntentSender() const
	{
		return callObjectMethod(
			"getDelayedFillIntentSender",
			"()Landroid/content/IntentSender;"
		);
	}
	inline JObject FillRequest::getFillContexts() const
	{
		return callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	inline jint FillRequest::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline jint FillRequest::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline android::view::inputmethod::InlineSuggestionsRequest FillRequest::getInlineSuggestionsRequest() const
	{
		return callObjectMethod(
			"getInlineSuggestionsRequest",
			"()Landroid/view/inputmethod/InlineSuggestionsRequest;"
		);
	}
	inline JString FillRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FillRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
