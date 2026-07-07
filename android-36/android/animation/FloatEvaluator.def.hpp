#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Float;
}
namespace java::lang
{
	class Number;
}
class JObject;

namespace android::animation
{
	class FloatEvaluator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FloatEvaluator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FloatEvaluator();
		
		// Methods
		java::lang::Float evaluate(jfloat arg0, java::lang::Number arg1, java::lang::Number arg2) const;
		JObject evaluate(jfloat arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::animation

