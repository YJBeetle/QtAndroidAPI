#include "./CaptioningManager_CaptionStyle.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaptioningManager_CaptioningChangeListener.hpp"

namespace android::view::accessibility
{
	// Fields
	
	CaptioningManager_CaptioningChangeListener::CaptioningManager_CaptioningChangeListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CaptioningManager_CaptioningChangeListener::CaptioningManager_CaptioningChangeListener()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.CaptioningManager$CaptioningChangeListener",
			"()V"
		);
	}
	
	// Methods
	void CaptioningManager_CaptioningChangeListener::onEnabledChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onEnabledChanged",
			"(Z)V",
			arg0
		);
	}
	void CaptioningManager_CaptioningChangeListener::onFontScaleChanged(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"onFontScaleChanged",
			"(F)V",
			arg0
		);
	}
	void CaptioningManager_CaptioningChangeListener::onLocaleChanged(java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"onLocaleChanged",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void CaptioningManager_CaptioningChangeListener::onUserStyleChanged(android::view::accessibility::CaptioningManager_CaptionStyle arg0)
	{
		__thiz.callMethod<void>(
			"onUserStyleChanged",
			"(Landroid/view/accessibility/CaptioningManager$CaptionStyle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::accessibility

