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
		jboolean autoUrlDetect() const;
		jint describeContents() const;
		jint getHintId() const;
		jint getImeOptions() const;
		jint getInputType() const;
		android::content::ComponentName getSearchActivity() const;
		jint getSettingsDescriptionId() const;
		JString getSuggestAuthority() const;
		JString getSuggestIntentAction() const;
		JString getSuggestIntentData() const;
		JString getSuggestPackage() const;
		JString getSuggestPath() const;
		JString getSuggestSelection() const;
		jint getSuggestThreshold() const;
		jint getVoiceLanguageId() const;
		jint getVoiceLanguageModeId() const;
		jint getVoiceMaxResults() const;
		jint getVoicePromptTextId() const;
		jboolean getVoiceSearchEnabled() const;
		jboolean getVoiceSearchLaunchRecognizer() const;
		jboolean getVoiceSearchLaunchWebSearch() const;
		jboolean queryAfterZeroResults() const;
		jboolean shouldIncludeInGlobalSearch() const;
		jboolean shouldRewriteQueryFromData() const;
		jboolean shouldRewriteQueryFromText() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

