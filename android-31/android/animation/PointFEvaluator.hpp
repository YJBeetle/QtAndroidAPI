#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class PointF;
}

namespace android::animation
{
	class PointFEvaluator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PointFEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PointFEvaluator(QJniObject obj);
		
		// Constructors
		PointFEvaluator();
		PointFEvaluator(android::graphics::PointF arg0);
		
		// Methods
		android::graphics::PointF evaluate(jfloat arg0, android::graphics::PointF arg1, android::graphics::PointF arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

