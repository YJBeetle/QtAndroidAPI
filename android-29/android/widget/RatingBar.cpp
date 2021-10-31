#include "../content/Context.hpp"
#include "./RatingBar.hpp"

namespace android::widget
{
	// Fields
	
	RatingBar::RatingBar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RatingBar::RatingBar(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	RatingBar::RatingBar(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RatingBar::RatingBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	RatingBar::RatingBar(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring RatingBar::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint RatingBar::getNumStars()
	{
		return __thiz.callMethod<jint>(
			"getNumStars",
			"()I"
		);
	}
	QAndroidJniObject RatingBar::getOnRatingBarChangeListener()
	{
		return __thiz.callObjectMethod(
			"getOnRatingBarChangeListener",
			"()Landroid/widget/RatingBar$OnRatingBarChangeListener;"
		);
	}
	jfloat RatingBar::getRating()
	{
		return __thiz.callMethod<jfloat>(
			"getRating",
			"()F"
		);
	}
	jfloat RatingBar::getStepSize()
	{
		return __thiz.callMethod<jfloat>(
			"getStepSize",
			"()F"
		);
	}
	jboolean RatingBar::isIndicator()
	{
		return __thiz.callMethod<jboolean>(
			"isIndicator",
			"()Z"
		);
	}
	void RatingBar::setIsIndicator(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsIndicator",
			"(Z)V",
			arg0
		);
	}
	void RatingBar::setMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void RatingBar::setNumStars(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNumStars",
			"(I)V",
			arg0
		);
	}
	void RatingBar::setOnRatingBarChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnRatingBarChangeListener",
			"(Landroid/widget/RatingBar$OnRatingBarChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void RatingBar::setRating(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRating",
			"(F)V",
			arg0
		);
	}
	void RatingBar::setStepSize(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setStepSize",
			"(F)V",
			arg0
		);
	}
} // namespace android::widget

