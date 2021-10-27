#pragma once

#ifndef ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER
#define ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class PrecomputedText_Params;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text
{
	class PrecomputedText_Params_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::text::PrecomputedText_Params arg0);
		void __constructor(__jni_impl::android::text::TextPaint arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
		QAndroidJniObject setTextDirection(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::text

#include "PrecomputedText_Params.hpp"
#include "TextPaint.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void PrecomputedText_Params_Builder::__constructor(__jni_impl::android::text::PrecomputedText_Params arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.__jniObject().object()
		);
	}
	void PrecomputedText_Params_Builder::__constructor(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrecomputedText_Params_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setBreakStrategy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setHyphenationFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setTextDirection(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/PrecomputedText$Params$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class PrecomputedText_Params_Builder : public __jni_impl::android::text::PrecomputedText_Params_Builder
	{
	public:
		PrecomputedText_Params_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PrecomputedText_Params_Builder(__jni_impl::android::text::PrecomputedText_Params arg0)
		{
			__constructor(
				arg0);
		}
		PrecomputedText_Params_Builder(__jni_impl::android::text::TextPaint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_PRECOMPUTEDTEXT_PARAMS_BUILDER

