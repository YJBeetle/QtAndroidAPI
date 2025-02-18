#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::biometrics
{
	class PromptVerticalListContentView;
}
class JString;

namespace android::hardware::biometrics
{
	class PromptVerticalListContentView_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PromptVerticalListContentView_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PromptVerticalListContentView_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PromptVerticalListContentView_Builder();
		
		// Methods
		android::hardware::biometrics::PromptVerticalListContentView_Builder addListItem(JObject arg0) const;
		android::hardware::biometrics::PromptVerticalListContentView_Builder addListItem(JObject arg0, jint arg1) const;
		android::hardware::biometrics::PromptVerticalListContentView build() const;
		android::hardware::biometrics::PromptVerticalListContentView_Builder setDescription(JString arg0) const;
	};
} // namespace android::hardware::biometrics

