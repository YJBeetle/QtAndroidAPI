#pragma once

#include "./BaseInterpolator.def.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class LinearInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinearInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		LinearInterpolator(QAndroidJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
		
		// Constructors
		LinearInterpolator();
		LinearInterpolator(android::content::Context arg0, JObject arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0) const;
	};
} // namespace android::view::animation

