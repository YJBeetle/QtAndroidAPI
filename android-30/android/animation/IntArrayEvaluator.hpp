#pragma once

#include "../../JObject.hpp"


namespace android::animation
{
	class IntArrayEvaluator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntArrayEvaluator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntArrayEvaluator(QJniObject obj);
		
		// Constructors
		IntArrayEvaluator();
		IntArrayEvaluator(jintArray arg0);
		
		// Methods
		jintArray evaluate(jfloat arg0, jintArray arg1, jintArray arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace android::animation

