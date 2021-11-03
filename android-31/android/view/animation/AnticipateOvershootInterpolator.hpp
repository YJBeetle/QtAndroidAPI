#pragma once

#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class AnticipateOvershootInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnticipateOvershootInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		AnticipateOvershootInterpolator(QAndroidJniObject obj);
		
		// Constructors
		AnticipateOvershootInterpolator();
		AnticipateOvershootInterpolator(jfloat arg0);
		AnticipateOvershootInterpolator(android::content::Context arg0, JObject arg1);
		AnticipateOvershootInterpolator(jfloat arg0, jfloat arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

