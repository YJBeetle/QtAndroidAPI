#pragma once

#include "./AbsSeekBar.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit RatingBar(const char *className, const char *sig, Ts...agv) : android::widget::AbsSeekBar(className, sig, std::forward<Ts>(agv)...) {}
		RatingBar(QJniObject obj) : android::widget::AbsSeekBar(obj) {}
		
		// Constructors
		RatingBar(android::content::Context arg0);
		RatingBar(android::content::Context arg0, JObject arg1);
		RatingBar(android::content::Context arg0, JObject arg1, jint arg2);
		RatingBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
		jint getNumStars() const;
		JObject getOnRatingBarChangeListener() const;
		jfloat getRating() const;
		jfloat getStepSize() const;
		jboolean isIndicator() const;
		void setIsIndicator(jboolean arg0) const;
		void setMax(jint arg0) const;
		void setNumStars(jint arg0) const;
		void setOnRatingBarChangeListener(JObject arg0) const;
		void setRating(jfloat arg0) const;
		void setStepSize(jfloat arg0) const;
	};
} // namespace android::widget

