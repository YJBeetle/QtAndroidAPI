#include "./CaptioningManager_CaptionStyle.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaptioningManager_CaptioningChangeListener.hpp"

namespace android::view::accessibility
{
	// Fields
	
	// QJniObject forward
	CaptioningManager_CaptioningChangeListener::CaptioningManager_CaptioningChangeListener(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CaptioningManager_CaptioningChangeListener::CaptioningManager_CaptioningChangeListener()
		: JObject(
			"android.view.accessibility.CaptioningManager$CaptioningChangeListener",
			"()V"
		) {}
	
	// Methods
	void CaptioningManager_CaptioningChangeListener::onEnabledChanged(jboolean arg0)
	{
		callMethod<void>(
			"onEnabledChanged",
			"(Z)V",
			arg0
		);
	}
	void CaptioningManager_CaptioningChangeListener::onFontScaleChanged(jfloat arg0)
	{
		callMethod<void>(
			"onFontScaleChanged",
			"(F)V",
			arg0
		);
	}
	void CaptioningManager_CaptioningChangeListener::onLocaleChanged(java::util::Locale arg0)
	{
		callMethod<void>(
			"onLocaleChanged",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void CaptioningManager_CaptioningChangeListener::onUserStyleChanged(android::view::accessibility::CaptioningManager_CaptionStyle arg0)
	{
		callMethod<void>(
			"onUserStyleChanged",
			"(Landroid/view/accessibility/CaptioningManager$CaptionStyle;)V",
			arg0.object()
		);
	}
} // namespace android::view::accessibility

