#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_DATEBUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_DATEBUILDER

#include "TtsSpan_SemioticClassBuilder.hpp"

namespace __jni_impl::java::lang
{
	class Integer;
}

namespace __jni_impl::android::text::style
{
	class TtsSpan_DateBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::lang::Integer arg0, __jni_impl::java::lang::Integer arg1, __jni_impl::java::lang::Integer arg2, __jni_impl::java::lang::Integer arg3);
		
		// Methods
		QAndroidJniObject setMonth(jint arg0);
		QAndroidJniObject setYear(jint arg0);
		QAndroidJniObject setWeekday(jint arg0);
		QAndroidJniObject setDay(jint arg0);
	};
} // namespace __jni_impl::android::text::style

#include "../../../java/lang/Integer.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_DateBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DateBuilder",
			"()V");
	}
	void TtsSpan_DateBuilder::__constructor(__jni_impl::java::lang::Integer arg0, __jni_impl::java::lang::Integer arg1, __jni_impl::java::lang::Integer arg2, __jni_impl::java::lang::Integer arg3)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$DateBuilder",
			"(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject TtsSpan_DateBuilder::setMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMonth",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setYear",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setWeekday(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setWeekday",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0);
	}
	QAndroidJniObject TtsSpan_DateBuilder::setDay(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDay",
			"(I)Landroid/text/style/TtsSpan$DateBuilder;",
			arg0);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_DateBuilder : public __jni_impl::android::text::style::TtsSpan_DateBuilder
	{
	public:
		TtsSpan_DateBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_DateBuilder()
		{
			__constructor();
		}
		TtsSpan_DateBuilder(__jni_impl::java::lang::Integer arg0, __jni_impl::java::lang::Integer arg1, __jni_impl::java::lang::Integer arg2, __jni_impl::java::lang::Integer arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TTSSPAN_DATEBUILDER

