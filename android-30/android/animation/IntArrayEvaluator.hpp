#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JObject;

namespace android::animation
{
	class IntArrayEvaluator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntArrayEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntArrayEvaluator(QAndroidJniObject obj);
		
		// Constructors
		IntArrayEvaluator();
		IntArrayEvaluator(JIntArray arg0);
		
		// Methods
		JIntArray evaluate(jfloat arg0, JIntArray arg1, JIntArray arg2);
		JObject evaluate(jfloat arg0, JObject arg1, JObject arg2);
	};
} // namespace android::animation

