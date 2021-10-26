#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_TIMEBUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_TIMEBUILDER

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_TimeBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject setHours(jint arg0);
		QAndroidJniObject setMinutes(jint arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_TimeBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TimeBuilder",
			"()V"
		);
	}
	void TtsSpan_TimeBuilder::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TimeBuilder",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_TimeBuilder::setHours(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHours",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TimeBuilder::setMinutes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMinutes",
			"(I)Landroid/text/style/TtsSpan$TimeBuilder;",
			arg0
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_TimeBuilder : public __jni_impl::android::text::style::TtsSpan_TimeBuilder
	{
	public:
		TtsSpan_TimeBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_TimeBuilder()
		{
			__constructor();
		}
		TtsSpan_TimeBuilder(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TTSSPAN_TIMEBUILDER

