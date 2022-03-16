#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Integer;
}
class JObject;

namespace android::animation
{
	class IntEvaluator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntEvaluator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		IntEvaluator();
		
		// Methods
		java::lang::Integer evaluate(jfloat arg0, java::lang::Integer arg1, java::lang::Integer arg2) const;
		JObject evaluate(jfloat arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::animation

