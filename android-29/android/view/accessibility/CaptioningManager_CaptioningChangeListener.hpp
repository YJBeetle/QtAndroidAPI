#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::accessibility
{
	class CaptioningManager_CaptionStyle;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::view::accessibility
{
	class CaptioningManager_CaptioningChangeListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onEnabledChanged(jboolean arg0);
		void onFontScaleChanged(jfloat arg0);
		void onLocaleChanged(__jni_impl::java::util::Locale arg0);
		void onUserStyleChanged(__jni_impl::android::view::accessibility::CaptioningManager_CaptionStyle arg0);
	};
} // namespace __jni_impl::android::view::accessibility

#include "./CaptioningManager_CaptionStyle.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	
	// Constructors
	void CaptioningManager_CaptioningChangeListener::__constructor()
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
	void CaptioningManager_CaptioningChangeListener::onLocaleChanged(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"onLocaleChanged",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void CaptioningManager_CaptioningChangeListener::onUserStyleChanged(__jni_impl::android::view::accessibility::CaptioningManager_CaptionStyle arg0)
	{
		__thiz.callMethod<void>(
			"onUserStyleChanged",
			"(Landroid/view/accessibility/CaptioningManager$CaptionStyle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class CaptioningManager_CaptioningChangeListener : public __jni_impl::android::view::accessibility::CaptioningManager_CaptioningChangeListener
	{
	public:
		CaptioningManager_CaptioningChangeListener(QAndroidJniObject obj) { __thiz = obj; }
		CaptioningManager_CaptioningChangeListener()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

