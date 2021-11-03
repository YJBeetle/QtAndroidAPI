#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class SearchableInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchableInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchableInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean autoUrlDetect();
		jint describeContents();
		jint getHintId();
		jint getImeOptions();
		jint getInputType();
		android::content::ComponentName getSearchActivity();
		jint getSettingsDescriptionId();
		JString getSuggestAuthority();
		JString getSuggestIntentAction();
		JString getSuggestIntentData();
		JString getSuggestPackage();
		JString getSuggestPath();
		JString getSuggestSelection();
		jint getSuggestThreshold();
		jint getVoiceLanguageId();
		jint getVoiceLanguageModeId();
		jint getVoiceMaxResults();
		jint getVoicePromptTextId();
		jboolean getVoiceSearchEnabled();
		jboolean getVoiceSearchLaunchRecognizer();
		jboolean getVoiceSearchLaunchWebSearch();
		jboolean queryAfterZeroResults();
		jboolean shouldIncludeInGlobalSearch();
		jboolean shouldRewriteQueryFromData();
		jboolean shouldRewriteQueryFromText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

