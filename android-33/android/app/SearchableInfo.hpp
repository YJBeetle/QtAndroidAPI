#pragma once

#include "../content/ComponentName.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./SearchableInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject SearchableInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.SearchableInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean SearchableInfo::autoUrlDetect() const
	{
		return callMethod<jboolean>(
			"autoUrlDetect",
			"()Z"
		);
	}
	inline jint SearchableInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SearchableInfo::getHintId() const
	{
		return callMethod<jint>(
			"getHintId",
			"()I"
		);
	}
	inline jint SearchableInfo::getImeOptions() const
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	inline jint SearchableInfo::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	inline android::content::ComponentName SearchableInfo::getSearchActivity() const
	{
		return callObjectMethod(
			"getSearchActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jint SearchableInfo::getSettingsDescriptionId() const
	{
		return callMethod<jint>(
			"getSettingsDescriptionId",
			"()I"
		);
	}
	inline JString SearchableInfo::getSuggestAuthority() const
	{
		return callObjectMethod(
			"getSuggestAuthority",
			"()Ljava/lang/String;"
		);
	}
	inline JString SearchableInfo::getSuggestIntentAction() const
	{
		return callObjectMethod(
			"getSuggestIntentAction",
			"()Ljava/lang/String;"
		);
	}
	inline JString SearchableInfo::getSuggestIntentData() const
	{
		return callObjectMethod(
			"getSuggestIntentData",
			"()Ljava/lang/String;"
		);
	}
	inline JString SearchableInfo::getSuggestPackage() const
	{
		return callObjectMethod(
			"getSuggestPackage",
			"()Ljava/lang/String;"
		);
	}
	inline JString SearchableInfo::getSuggestPath() const
	{
		return callObjectMethod(
			"getSuggestPath",
			"()Ljava/lang/String;"
		);
	}
	inline JString SearchableInfo::getSuggestSelection() const
	{
		return callObjectMethod(
			"getSuggestSelection",
			"()Ljava/lang/String;"
		);
	}
	inline jint SearchableInfo::getSuggestThreshold() const
	{
		return callMethod<jint>(
			"getSuggestThreshold",
			"()I"
		);
	}
	inline jint SearchableInfo::getVoiceLanguageId() const
	{
		return callMethod<jint>(
			"getVoiceLanguageId",
			"()I"
		);
	}
	inline jint SearchableInfo::getVoiceLanguageModeId() const
	{
		return callMethod<jint>(
			"getVoiceLanguageModeId",
			"()I"
		);
	}
	inline jint SearchableInfo::getVoiceMaxResults() const
	{
		return callMethod<jint>(
			"getVoiceMaxResults",
			"()I"
		);
	}
	inline jint SearchableInfo::getVoicePromptTextId() const
	{
		return callMethod<jint>(
			"getVoicePromptTextId",
			"()I"
		);
	}
	inline jboolean SearchableInfo::getVoiceSearchEnabled() const
	{
		return callMethod<jboolean>(
			"getVoiceSearchEnabled",
			"()Z"
		);
	}
	inline jboolean SearchableInfo::getVoiceSearchLaunchRecognizer() const
	{
		return callMethod<jboolean>(
			"getVoiceSearchLaunchRecognizer",
			"()Z"
		);
	}
	inline jboolean SearchableInfo::getVoiceSearchLaunchWebSearch() const
	{
		return callMethod<jboolean>(
			"getVoiceSearchLaunchWebSearch",
			"()Z"
		);
	}
	inline jboolean SearchableInfo::queryAfterZeroResults() const
	{
		return callMethod<jboolean>(
			"queryAfterZeroResults",
			"()Z"
		);
	}
	inline jboolean SearchableInfo::shouldIncludeInGlobalSearch() const
	{
		return callMethod<jboolean>(
			"shouldIncludeInGlobalSearch",
			"()Z"
		);
	}
	inline jboolean SearchableInfo::shouldRewriteQueryFromData() const
	{
		return callMethod<jboolean>(
			"shouldRewriteQueryFromData",
			"()Z"
		);
	}
	inline jboolean SearchableInfo::shouldRewriteQueryFromText() const
	{
		return callMethod<jboolean>(
			"shouldRewriteQueryFromText",
			"()Z"
		);
	}
	inline void SearchableInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
