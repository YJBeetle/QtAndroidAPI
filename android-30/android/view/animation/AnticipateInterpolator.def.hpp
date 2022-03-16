#pragma once

#include "./BaseInterpolator.def.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class AnticipateInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnticipateInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		AnticipateInterpolator(QJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
		
		// Constructors
		AnticipateInterpolator();
		AnticipateInterpolator(jfloat arg0);
		AnticipateInterpolator(android::content::Context arg0, JObject arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0) const;
	};
} // namespace android::view::animation

