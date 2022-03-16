#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class PointF;
}
class JObject;

namespace android::animation
{
	class PointFEvaluator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PointFEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PointFEvaluator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PointFEvaluator();
		PointFEvaluator(android::graphics::PointF arg0);
		
		// Methods
		android::graphics::PointF evaluate(jfloat arg0, android::graphics::PointF arg1, android::graphics::PointF arg2) const;
		JObject evaluate(jfloat arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::animation

