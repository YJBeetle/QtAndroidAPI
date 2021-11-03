#pragma once

#include "./Animation.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::animation
{
	class Transformation;
}

namespace android::view::animation
{
	class ScaleAnimation : public android::view::animation::Animation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScaleAnimation(const char *className, const char *sig, Ts...agv) : android::view::animation::Animation(className, sig, std::forward<Ts>(agv)...) {}
		ScaleAnimation(QJniObject obj);
		
		// Constructors
		ScaleAnimation(android::content::Context arg0, JObject arg1);
		ScaleAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		ScaleAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		ScaleAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jfloat arg5, jint arg6, jfloat arg7);
		
		// Methods
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::view::animation

