#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::biometrics
{
	class PromptContentViewWithMoreOptionsButton;
}
class JString;

namespace android::hardware::biometrics
{
	class PromptContentViewWithMoreOptionsButton_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PromptContentViewWithMoreOptionsButton_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PromptContentViewWithMoreOptionsButton_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PromptContentViewWithMoreOptionsButton_Builder();
		
		// Methods
		android::hardware::biometrics::PromptContentViewWithMoreOptionsButton build() const;
		android::hardware::biometrics::PromptContentViewWithMoreOptionsButton_Builder setDescription(JString arg0) const;
		android::hardware::biometrics::PromptContentViewWithMoreOptionsButton_Builder setMoreOptionsButtonListener(JObject arg0, JObject arg1) const;
	};
} // namespace android::hardware::biometrics

