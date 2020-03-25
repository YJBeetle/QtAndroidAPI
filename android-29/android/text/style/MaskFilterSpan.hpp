#pragma once

#ifndef ANDROID_TEXT_STYLE_MASKFILTERSPAN
#define ANDROID_TEXT_STYLE_MASKFILTERSPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"

namespace __jni_impl::android::graphics
{
	class MaskFilter;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text::style
{
	class MaskFilterSpan : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::MaskFilter arg0);
		
		// Methods
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		QAndroidJniObject getMaskFilter();
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/MaskFilter.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void MaskFilterSpan::__constructor(__jni_impl::android::graphics::MaskFilter arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.MaskFilterSpan",
			"(Landroid/graphics/MaskFilter;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void MaskFilterSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MaskFilterSpan::getMaskFilter()
	{
		return __thiz.callObjectMethod(
			"getMaskFilter",
			"()Landroid/graphics/MaskFilter;");
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class MaskFilterSpan : public __jni_impl::android::text::style::MaskFilterSpan
	{
	public:
		MaskFilterSpan(QAndroidJniObject obj) { __thiz = obj; }
		MaskFilterSpan(__jni_impl::android::graphics::MaskFilter arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_MASKFILTERSPAN

