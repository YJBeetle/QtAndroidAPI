#pragma once

#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class BounceInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BounceInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		BounceInterpolator(QAndroidJniObject obj);
		
		// Constructors
		BounceInterpolator();
		BounceInterpolator(android::content::Context arg0, JObject arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0) const;
	};
} // namespace android::view::animation

