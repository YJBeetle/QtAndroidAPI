#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TranslationSpec.def.hpp"
#include "../../../JString.hpp"
#include "./TranslationCapability.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject TranslationCapability::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationCapability",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TranslationCapability::STATE_AVAILABLE_TO_DOWNLOAD()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_AVAILABLE_TO_DOWNLOAD"
		);
	}
	inline jint TranslationCapability::STATE_DOWNLOADING()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_DOWNLOADING"
		);
	}
	inline jint TranslationCapability::STATE_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_NOT_AVAILABLE"
		);
	}
	inline jint TranslationCapability::STATE_ON_DEVICE()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_ON_DEVICE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TranslationCapability::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::view::translation::TranslationSpec TranslationCapability::getSourceSpec() const
	{
		return callObjectMethod(
			"getSourceSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	inline jint TranslationCapability::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint TranslationCapability::getSupportedTranslationFlags() const
	{
		return callMethod<jint>(
			"getSupportedTranslationFlags",
			"()I"
		);
	}
	inline android::view::translation::TranslationSpec TranslationCapability::getTargetSpec() const
	{
		return callObjectMethod(
			"getTargetSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	inline jboolean TranslationCapability::isUiTranslationEnabled() const
	{
		return callMethod<jboolean>(
			"isUiTranslationEnabled",
			"()Z"
		);
	}
	inline JString TranslationCapability::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TranslationCapability::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

// Base class headers

