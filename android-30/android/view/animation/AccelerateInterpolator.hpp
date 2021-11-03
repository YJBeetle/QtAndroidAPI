#pragma once

#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class AccelerateInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccelerateInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		AccelerateInterpolator(QAndroidJniObject obj);
		
		// Constructors
		AccelerateInterpolator();
		AccelerateInterpolator(jfloat arg0);
		AccelerateInterpolator(android::content::Context arg0, JObject arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace android::view::animation

