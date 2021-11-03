#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./SearchableInfo.hpp"

namespace android::app
{
	// Fields
	JObject SearchableInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.SearchableInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SearchableInfo::SearchableInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SearchableInfo::autoUrlDetect() const
	{
		return callMethod<jboolean>(
			"autoUrlDetect",
			"()Z"
		);
	}
	jint SearchableInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SearchableInfo::getHintId() const
	{
		return callMethod<jint>(
			"getHintId",
			"()I"
		);
	}
	jint SearchableInfo::getImeOptions() const
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jint SearchableInfo::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	android::content::ComponentName SearchableInfo::getSearchActivity() const
	{
		return callObjectMethod(
			"getSearchActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	jint SearchableInfo::getSettingsDescriptionId() const
	{
		return callMethod<jint>(
			"getSettingsDescriptionId",
			"()I"
		);
	}
	JString SearchableInfo::getSuggestAuthority() const
	{
		return callObjectMethod(
			"getSuggestAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestIntentAction() const
	{
		return callObjectMethod(
			"getSuggestIntentAction",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestIntentData() const
	{
		return callObjectMethod(
			"getSuggestIntentData",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestPackage() const
	{
		return callObjectMethod(
			"getSuggestPackage",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestPath() const
	{
		return callObjectMethod(
			"getSuggestPath",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestSelection() const
	{
		return callObjectMethod(
			"getSuggestSelection",
			"()Ljava/lang/String;"
		);
	}
	jint SearchableInfo::getSuggestThreshold() const
	{
		return callMethod<jint>(
			"getSuggestThreshold",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceLanguageId() const
	{
		return callMethod<jint>(
			"getVoiceLanguageId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceLanguageModeId() const
	{
		return callMethod<jint>(
			"getVoiceLanguageModeId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceMaxResults() const
	{
		return callMethod<jint>(
			"getVoiceMaxResults",
			"()I"
		);
	}
	jint SearchableInfo::getVoicePromptTextId() const
	{
		return callMethod<jint>(
			"getVoicePromptTextId",
			"()I"
		);
	}
	jboolean SearchableInfo::getVoiceSearchEnabled() const
	{
		return callMethod<jboolean>(
			"getVoiceSearchEnabled",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchRecognizer() const
	{
		return callMethod<jboolean>(
			"getVoiceSearchLaunchRecognizer",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchWebSearch() const
	{
		return callMethod<jboolean>(
			"getVoiceSearchLaunchWebSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::queryAfterZeroResults() const
	{
		return callMethod<jboolean>(
			"queryAfterZeroResults",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldIncludeInGlobalSearch() const
	{
		return callMethod<jboolean>(
			"shouldIncludeInGlobalSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromData() const
	{
		return callMethod<jboolean>(
			"shouldRewriteQueryFromData",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromText() const
	{
		return callMethod<jboolean>(
			"shouldRewriteQueryFromText",
			"()Z"
		);
	}
	void SearchableInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

