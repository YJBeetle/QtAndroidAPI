#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::animation
{
	class RectEvaluator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RectEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RectEvaluator(QAndroidJniObject obj);
		
		// Constructors
		RectEvaluator();
		RectEvaluator(android::graphics::Rect arg0);
		
		// Methods
		android::graphics::Rect evaluate(jfloat arg0, android::graphics::Rect arg1, android::graphics::Rect arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

