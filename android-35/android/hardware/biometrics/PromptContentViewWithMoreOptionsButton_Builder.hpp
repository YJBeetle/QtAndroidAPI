#pragma once

#include "./PromptContentViewWithMoreOptionsButton.def.hpp"
#include "../../../JString.hpp"
#include "./PromptContentViewWithMoreOptionsButton_Builder.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	inline PromptContentViewWithMoreOptionsButton_Builder::PromptContentViewWithMoreOptionsButton_Builder()
		: JObject(
			"android.hardware.biometrics.PromptContentViewWithMoreOptionsButton$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::hardware::biometrics::PromptContentViewWithMoreOptionsButton PromptContentViewWithMoreOptionsButton_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/biometrics/PromptContentViewWithMoreOptionsButton;"
		);
	}
	inline android::hardware::biometrics::PromptContentViewWithMoreOptionsButton_Builder PromptContentViewWithMoreOptionsButton_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/hardware/biometrics/PromptContentViewWithMoreOptionsButton$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::hardware::biometrics::PromptContentViewWithMoreOptionsButton_Builder PromptContentViewWithMoreOptionsButton_Builder::setMoreOptionsButtonListener(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setMoreOptionsButtonListener",
			"(Ljava/util/concurrent/Executor;Landroid/content/DialogInterface$OnClickListener;)Landroid/hardware/biometrics/PromptContentViewWithMoreOptionsButton$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
