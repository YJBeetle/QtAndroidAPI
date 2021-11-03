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
		
		// QJniObject forward
		template<typename ...Ts> explicit AnticipateOvershootInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		AnticipateOvershootInterpolator(QJniObject obj);
		
		// Constructors
		AnticipateOvershootInterpolator();
		AnticipateOvershootInterpolator(jfloat arg0);
		AnticipateOvershootInterpolator(android::content::Context arg0, JObject arg1);
		AnticipateOvershootInterpolator(jfloat arg0, jfloat arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0) const;
	};
} // namespace android::view::animation

