#pragma once

#include "./PromptVerticalListContentView.def.hpp"
#include "../../../JString.hpp"
#include "./PromptVerticalListContentView_Builder.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	
	// Constructors
	inline PromptVerticalListContentView_Builder::PromptVerticalListContentView_Builder()
		: JObject(
			"android.hardware.biometrics.PromptVerticalListContentView$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::hardware::biometrics::PromptVerticalListContentView_Builder PromptVerticalListContentView_Builder::addListItem(JObject arg0) const
	{
		return callObjectMethod(
			"addListItem",
			"(Landroid/hardware/biometrics/PromptContentItem;)Landroid/hardware/biometrics/PromptVerticalListContentView$Builder;",
			arg0.object()
		);
	}
	inline android::hardware::biometrics::PromptVerticalListContentView_Builder PromptVerticalListContentView_Builder::addListItem(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"addListItem",
			"(Landroid/hardware/biometrics/PromptContentItem;I)Landroid/hardware/biometrics/PromptVerticalListContentView$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline android::hardware::biometrics::PromptVerticalListContentView PromptVerticalListContentView_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/biometrics/PromptVerticalListContentView;"
		);
	}
	inline android::hardware::biometrics::PromptVerticalListContentView_Builder PromptVerticalListContentView_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/hardware/biometrics/PromptVerticalListContentView$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
