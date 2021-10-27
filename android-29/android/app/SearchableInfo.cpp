#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "./SearchableInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject SearchableInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchableInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SearchableInfo::SearchableInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean SearchableInfo::autoUrlDetect()
	{
		return __thiz.callMethod<jboolean>(
			"autoUrlDetect",
			"()Z"
		);
	}
	jint SearchableInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SearchableInfo::getHintId()
	{
		return __thiz.callMethod<jint>(
			"getHintId",
			"()I"
		);
	}
	jint SearchableInfo::getImeOptions()
	{
		return __thiz.callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jint SearchableInfo::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	QAndroidJniObject SearchableInfo::getSearchActivity()
	{
		return __thiz.callObjectMethod(
			"getSearchActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	jint SearchableInfo::getSettingsDescriptionId()
	{
		return __thiz.callMethod<jint>(
			"getSettingsDescriptionId",
			"()I"
		);
	}
	jstring SearchableInfo::getSuggestAuthority()
	{
		return __thiz.callObjectMethod(
			"getSuggestAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestIntentAction()
	{
		return __thiz.callObjectMethod(
			"getSuggestIntentAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestIntentData()
	{
		return __thiz.callObjectMethod(
			"getSuggestIntentData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestPackage()
	{
		return __thiz.callObjectMethod(
			"getSuggestPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestPath()
	{
		return __thiz.callObjectMethod(
			"getSuggestPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestSelection()
	{
		return __thiz.callObjectMethod(
			"getSuggestSelection",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SearchableInfo::getSuggestThreshold()
	{
		return __thiz.callMethod<jint>(
			"getSuggestThreshold",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceLanguageId()
	{
		return __thiz.callMethod<jint>(
			"getVoiceLanguageId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceLanguageModeId()
	{
		return __thiz.callMethod<jint>(
			"getVoiceLanguageModeId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceMaxResults()
	{
		return __thiz.callMethod<jint>(
			"getVoiceMaxResults",
			"()I"
		);
	}
	jint SearchableInfo::getVoicePromptTextId()
	{
		return __thiz.callMethod<jint>(
			"getVoicePromptTextId",
			"()I"
		);
	}
	jboolean SearchableInfo::getVoiceSearchEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getVoiceSearchEnabled",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchRecognizer()
	{
		return __thiz.callMethod<jboolean>(
			"getVoiceSearchLaunchRecognizer",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchWebSearch()
	{
		return __thiz.callMethod<jboolean>(
			"getVoiceSearchLaunchWebSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::queryAfterZeroResults()
	{
		return __thiz.callMethod<jboolean>(
			"queryAfterZeroResults",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldIncludeInGlobalSearch()
	{
		return __thiz.callMethod<jboolean>(
			"shouldIncludeInGlobalSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromData()
	{
		return __thiz.callMethod<jboolean>(
			"shouldRewriteQueryFromData",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromText()
	{
		return __thiz.callMethod<jboolean>(
			"shouldRewriteQueryFromText",
			"()Z"
		);
	}
	void SearchableInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

