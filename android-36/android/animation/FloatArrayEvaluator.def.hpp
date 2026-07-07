#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JObject;

namespace android::animation
{
	class FloatArrayEvaluator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatArrayEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FloatArrayEvaluator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FloatArrayEvaluator();
		FloatArrayEvaluator(JFloatArray arg0);
		
		// Methods
		JFloatArray evaluate(jfloat arg0, JFloatArray arg1, JFloatArray arg2) const;
		JObject evaluate(jfloat arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::animation

