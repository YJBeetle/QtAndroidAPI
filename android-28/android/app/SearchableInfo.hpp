#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class SearchableInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchableInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchableInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean autoUrlDetect();
		jint describeContents();
		jint getHintId();
		jint getImeOptions();
		jint getInputType();
		android::content::ComponentName getSearchActivity();
		jint getSettingsDescriptionId();
		jstring getSuggestAuthority();
		jstring getSuggestIntentAction();
		jstring getSuggestIntentData();
		jstring getSuggestPackage();
		jstring getSuggestPath();
		jstring getSuggestSelection();
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
