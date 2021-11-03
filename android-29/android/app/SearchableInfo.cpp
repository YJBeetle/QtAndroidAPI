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
	jboolean SearchableInfo::autoUrlDetect()
	{
		return callMethod<jboolean>(
			"autoUrlDetect",
			"()Z"
		);
	}
	jint SearchableInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SearchableInfo::getHintId()
	{
		return callMethod<jint>(
			"getHintId",
			"()I"
		);
	}
	jint SearchableInfo::getImeOptions()
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jint SearchableInfo::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	android::content::ComponentName SearchableInfo::getSearchActivity()
	{
		return callObjectMethod(
			"getSearchActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	jint SearchableInfo::getSettingsDescriptionId()
	{
		return callMethod<jint>(
			"getSettingsDescriptionId",
			"()I"
		);
	}
	JString SearchableInfo::getSuggestAuthority()
	{
		return callObjectMethod(
			"getSuggestAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestIntentAction()
	{
		return callObjectMethod(
			"getSuggestIntentAction",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestIntentData()
	{
		return callObjectMethod(
			"getSuggestIntentData",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestPackage()
	{
		return callObjectMethod(
			"getSuggestPackage",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestPath()
	{
		return callObjectMethod(
			"getSuggestPath",
			"()Ljava/lang/String;"
		);
	}
	JString SearchableInfo::getSuggestSelection()
	{
		return callObjectMethod(
			"getSuggestSelection",
			"()Ljava/lang/String;"
		);
	}
	jint SearchableInfo::getSuggestThreshold()
	{
		return callMethod<jint>(
			"getSuggestThreshold",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceLanguageId()
	{
		return callMethod<jint>(
			"getVoiceLanguageId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceLanguageModeId()
	{
		return callMethod<jint>(
			"getVoiceLanguageModeId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceMaxResults()
	{
		return callMethod<jint>(
			"getVoiceMaxResults",
			"()I"
		);
	}
	jint SearchableInfo::getVoicePromptTextId()
	{
		return callMethod<jint>(
			"getVoicePromptTextId",
			"()I"
		);
	}
	jboolean SearchableInfo::getVoiceSearchEnabled()
	{
		return callMethod<jboolean>(
			"getVoiceSearchEnabled",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchRecognizer()
	{
		return callMethod<jboolean>(
			"getVoiceSearchLaunchRecognizer",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchWebSearch()
	{
		return callMethod<jboolean>(
			"getVoiceSearchLaunchWebSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::queryAfterZeroResults()
	{
		return callMethod<jboolean>(
			"queryAfterZeroResults",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldIncludeInGlobalSearch()
	{
		return callMethod<jboolean>(
			"shouldIncludeInGlobalSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromData()
	{
		return callMethod<jboolean>(
			"shouldRewriteQueryFromData",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromText()
	{
		return callMethod<jboolean>(
			"shouldRewriteQueryFromText",
			"()Z"
		);
	}
	void SearchableInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

