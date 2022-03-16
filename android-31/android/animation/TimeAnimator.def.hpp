#pragma once

#include "./ValueAnimator.def.hpp"

namespace android::animation
{
	class TimeAnimator : public android::animation::ValueAnimator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeAnimator(const char *className, const char *sig, Ts...agv) : android::animation::ValueAnimator(className, sig, std::forward<Ts>(agv)...) {}
		TimeAnimator(QJniObject obj) : android::animation::ValueAnimator(obj) {}
		
		// Constructors
		TimeAnimator();
		
		// Methods
		void setCurrentPlayTime(jlong arg0) const;
		void setTimeListener(JObject arg0) const;
		void start() const;
	};
} // namespace android::animation

