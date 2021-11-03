#pragma once

#include "./AbsSeekBar.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::widget
{
	class RatingBar : public android::widget::AbsSeekBar
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RatingBar(const char *className, const char *sig, Ts...agv) : android::widget::AbsSeekBar(className, sig, std::forward<Ts>(agv)...) {}
		RatingBar(QAndroidJniObject obj);
		
		// Constructors
		RatingBar(android::content::Context arg0);
		RatingBar(android::content::Context arg0, JObject arg1);
		RatingBar(android::content::Context arg0, JObject arg1, jint arg2);
		RatingBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName();
		jint getNumStars();
		JObject getOnRatingBarChangeListener();
		jfloat getRating();
		jfloat getStepSize();
		jboolean isIndicator();
		void setIsIndicator(jboolean arg0);
		void setMax(jint arg0);
		void setNumStars(jint arg0);
		void setOnRatingBarChangeListener(JObject arg0);
		void setRating(jfloat arg0);
		void setStepSize(jfloat arg0);
	};
} // namespace android::widget

