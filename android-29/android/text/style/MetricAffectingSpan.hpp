#pragma once

#ifndef ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN
#define ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"

namespace __jni_impl::android::text::style
{
	class CharacterStyle;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text::style
{
	class MetricAffectingSpan : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getUnderlying();
		void updateMeasureState(__jni_impl::android::text::TextPaint arg0);
	};
} // namespace __jni_impl::android::text::style

#include "CharacterStyle.hpp"
#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void MetricAffectingSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.MetricAffectingSpan",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MetricAffectingSpan::getUnderlying()
	{
		return __thiz.callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/MetricAffectingSpan;"
		);
	}
	void MetricAffectingSpan::updateMeasureState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class MetricAffectingSpan : public __jni_impl::android::text::style::MetricAffectingSpan
	{
	public:
		MetricAffectingSpan(QAndroidJniObject obj) { __thiz = obj; }
		MetricAffectingSpan()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_METRICAFFECTINGSPAN

