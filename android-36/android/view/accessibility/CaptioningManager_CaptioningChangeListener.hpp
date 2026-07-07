#pragma once

#include "./CaptioningManager_CaptionStyle.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./CaptioningManager_CaptioningChangeListener.def.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	inline CaptioningManager_CaptioningChangeListener::CaptioningManager_CaptioningChangeListener()
		: JObject(
			"android.view.accessibility.CaptioningManager$CaptioningChangeListener",
			"()V"
		) {}
	
	// Methods
	inline void CaptioningManager_CaptioningChangeListener::onEnabledChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onEnabledChanged",
			"(Z)V",
			arg0
		);
	}
	inline void CaptioningManager_CaptioningChangeListener::onFontScaleChanged(jfloat arg0) const
	{
		callMethod<void>(
			"onFontScaleChanged",
			"(F)V",
			arg0
		);
	}
	inline void CaptioningManager_CaptioningChangeListener::onLocaleChanged(java::util::Locale arg0) const
	{
		callMethod<void>(
			"onLocaleChanged",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	inline void CaptioningManager_CaptioningChangeListener::onSystemAudioCaptioningChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onSystemAudioCaptioningChanged",
			"(Z)V",
			arg0
		);
	}
	inline void CaptioningManager_CaptioningChangeListener::onSystemAudioCaptioningUiChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onSystemAudioCaptioningUiChanged",
			"(Z)V",
			arg0
		);
	}
	inline void CaptioningManager_CaptioningChangeListener::onUserStyleChanged(android::view::accessibility::CaptioningManager_CaptionStyle arg0) const
	{
		callMethod<void>(
			"onUserStyleChanged",
			"(Landroid/view/accessibility/CaptioningManager$CaptionStyle;)V",
			arg0.object()
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
