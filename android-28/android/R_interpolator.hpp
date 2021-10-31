#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_interpolator : public __JniBaseClass
	{
	public:
		// Fields
		static jint accelerate_cubic();
		static jint accelerate_decelerate();
		static jint accelerate_quad();
		static jint accelerate_quint();
		static jint anticipate();
		static jint anticipate_overshoot();
		static jint bounce();
		static jint cycle();
		static jint decelerate_cubic();
		static jint decelerate_quad();
		static jint decelerate_quint();
		static jint fast_out_extra_slow_in();
		static jint fast_out_linear_in();
		static jint fast_out_slow_in();
		static jint linear();
		static jint linear_out_slow_in();
		static jint overshoot();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_interpolator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_interpolator(QAndroidJniObject obj);
		
		// Constructors
		R_interpolator();
		
		// Methods
	};
} // namespace android

