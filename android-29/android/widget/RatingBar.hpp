#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./ProgressBar.hpp"
#include "./AbsSeekBar.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class RatingBar : public android::widget::AbsSeekBar
	{
	public:
		// Fields
		
		RatingBar(QAndroidJniObject obj);
		// Constructors
		RatingBar(android::content::Context &arg0);
		RatingBar(android::content::Context &arg0, __JniBaseClass &arg1);
		RatingBar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		RatingBar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		RatingBar() = default;
		
		// Methods
		jstring getAccessibilityClassName();
		jint getNumStars();
		QAndroidJniObject getOnRatingBarChangeListener();
		jfloat getRating();
		jfloat getStepSize();
		jboolean isIndicator();
		void setIsIndicator(jboolean arg0);
		void setMax(jint arg0);
		void setNumStars(jint arg0);
		void setOnRatingBarChangeListener(__JniBaseClass arg0);
		void setRating(jfloat arg0);
		void setStepSize(jfloat arg0);
	};
} // namespace android::widget

