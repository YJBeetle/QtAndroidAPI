#include "./CaptioningManager_CaptionStyle.hpp"
#include "./CaptioningManager_CaptioningChangeListener.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaptioningManager.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// Constructors
	
	// Methods
	void CaptioningManager::addCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const
	{
		callMethod<void>(
			"addCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.object()
		);
	}
	jfloat CaptioningManager::getFontScale() const
	{
		return callMethod<jfloat>(
			"getFontScale",
			"()F"
		);
	}
	java::util::Locale CaptioningManager::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	android::view::accessibility::CaptioningManager_CaptionStyle CaptioningManager::getUserStyle() const
	{
		return callObjectMethod(
			"getUserStyle",
			"()Landroid/view/accessibility/CaptioningManager$CaptionStyle;"
		);
	}
	jboolean CaptioningManager::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void CaptioningManager::removeCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const
	{
		callMethod<void>(
			"removeCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::view::accessibility

