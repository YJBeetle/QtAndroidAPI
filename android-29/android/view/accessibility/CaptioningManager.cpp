#include "../../content/Context.hpp"
#include "./CaptioningManager_CaptionStyle.hpp"
#include "./CaptioningManager_CaptioningChangeListener.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaptioningManager.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// QAndroidJniObject forward
	CaptioningManager::CaptioningManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void CaptioningManager::addCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0)
	{
		callMethod<void>(
			"addCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.object()
		);
	}
	jfloat CaptioningManager::getFontScale()
	{
		return callMethod<jfloat>(
			"getFontScale",
			"()F"
		);
	}
	QAndroidJniObject CaptioningManager::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject CaptioningManager::getUserStyle()
	{
		return callObjectMethod(
			"getUserStyle",
			"()Landroid/view/accessibility/CaptioningManager$CaptionStyle;"
		);
	}
	jboolean CaptioningManager::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void CaptioningManager::removeCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0)
	{
		callMethod<void>(
			"removeCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::view::accessibility

