#pragma once

#include "./CaptioningManager_CaptionStyle.def.hpp"
#include "./CaptioningManager_CaptioningChangeListener.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./CaptioningManager.def.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void CaptioningManager::addCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const
	{
		callMethod<void>(
			"addCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.object()
		);
	}
	inline jfloat CaptioningManager::getFontScale() const
	{
		return callMethod<jfloat>(
			"getFontScale",
			"()F"
		);
	}
	inline java::util::Locale CaptioningManager::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline android::view::accessibility::CaptioningManager_CaptionStyle CaptioningManager::getUserStyle() const
	{
		return callObjectMethod(
			"getUserStyle",
			"()Landroid/view/accessibility/CaptioningManager$CaptionStyle;"
		);
	}
	inline jboolean CaptioningManager::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void CaptioningManager::removeCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const
	{
		callMethod<void>(
			"removeCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
