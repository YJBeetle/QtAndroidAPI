#pragma once

#ifndef ANDROID_WIDGET_RATINGBAR
#define ANDROID_WIDGET_RATINGBAR

#include "AbsSeekBar.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::widget
{
	class RatingBar : public __jni_impl::android::widget::AbsSeekBar
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		
		// Methods
		jfloat getRating();
		void setRating(jfloat arg0);
		QAndroidJniObject getOnRatingBarChangeListener();
		void setIsIndicator(jboolean arg0);
		void setNumStars(jint arg0);
		void setOnRatingBarChangeListener(__jni_impl::__JniBaseClass arg0);
		jint getNumStars();
		void setStepSize(jfloat arg0);
		jfloat getStepSize();
		void setMax(jint arg0);
		jboolean isIndicator();
		QAndroidJniObject getAccessibilityClassName();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void RatingBar::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void RatingBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RatingBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void RatingBar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
	jfloat RatingBar::getRating()
	{
		return __thiz.callMethod<jfloat>(
			"getRating",
			"()F");
	}
	void RatingBar::setRating(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRating",
			"(F)V",
			arg0);
	}
	QAndroidJniObject RatingBar::getOnRatingBarChangeListener()
	{
		return __thiz.callObjectMethod(
			"getOnRatingBarChangeListener",
			"()Landroid/widget/RatingBar$OnRatingBarChangeListener;");
	}
	void RatingBar::setIsIndicator(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsIndicator",
			"(Z)V",
			arg0);
	}
	void RatingBar::setNumStars(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNumStars",
			"(I)V",
			arg0);
	}
	void RatingBar::setOnRatingBarChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnRatingBarChangeListener",
			"(Landroid/widget/RatingBar$OnRatingBarChangeListener;)V",
			arg0.__jniObject().object());
	}
	jint RatingBar::getNumStars()
	{
		return __thiz.callMethod<jint>(
			"getNumStars",
			"()I");
	}
	void RatingBar::setStepSize(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setStepSize",
			"(F)V",
			arg0);
	}
	jfloat RatingBar::getStepSize()
	{
		return __thiz.callMethod<jfloat>(
			"getStepSize",
			"()F");
	}
	void RatingBar::setMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMax",
			"(I)V",
			arg0);
	}
	jboolean RatingBar::isIndicator()
	{
		return __thiz.callMethod<jboolean>(
			"isIndicator",
			"()Z");
	}
	QAndroidJniObject RatingBar::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RatingBar : public __jni_impl::android::widget::RatingBar
	{
	public:
		RatingBar(QAndroidJniObject obj) { __thiz = obj; }
		RatingBar(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		RatingBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RatingBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		RatingBar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_RATINGBAR

