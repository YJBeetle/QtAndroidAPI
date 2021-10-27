#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "ProgressBar.hpp"
#include "AbsSeekBar.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class SeekBar : public __jni_impl::android::widget::AbsSeekBar
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		void setOnSeekBarChangeListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void SeekBar::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void SeekBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SeekBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SeekBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring SeekBar::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void SeekBar::setOnSeekBarChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSeekBarChangeListener",
			"(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class SeekBar : public __jni_impl::android::widget::SeekBar
	{
	public:
		SeekBar(QAndroidJniObject obj) { __thiz = obj; }
		SeekBar(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		SeekBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SeekBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SeekBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

