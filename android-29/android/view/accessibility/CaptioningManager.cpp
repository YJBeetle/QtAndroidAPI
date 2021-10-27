#include "../../content/Context.hpp"
#include "./CaptioningManager_CaptionStyle.hpp"
#include "./CaptioningManager_CaptioningChangeListener.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaptioningManager.hpp"

namespace android::view::accessibility
{
	// Fields
	
	CaptioningManager::CaptioningManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void CaptioningManager::addCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0)
	{
		__thiz.callMethod<void>(
			"addCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat CaptioningManager::getFontScale()
	{
		return __thiz.callMethod<jfloat>(
			"getFontScale",
			"()F"
		);
	}
	QAndroidJniObject CaptioningManager::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject CaptioningManager::getUserStyle()
	{
		return __thiz.callObjectMethod(
			"getUserStyle",
			"()Landroid/view/accessibility/CaptioningManager$CaptionStyle;"
		);
	}
	jboolean CaptioningManager::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void CaptioningManager::removeCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0)
	{
		__thiz.callMethod<void>(
			"removeCaptioningChangeListener",
			"(Landroid/view/accessibility/CaptioningManager$CaptioningChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::accessibility

