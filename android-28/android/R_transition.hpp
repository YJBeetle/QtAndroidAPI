#pragma once

#include "../JObject.hpp"


namespace android
{
	class R_transition : public JObject
	{
	public:
		// Fields
		static jint explode();
		static jint fade();
		static jint move();
		static jint no_transition();
		static jint slide_bottom();
		static jint slide_left();
		static jint slide_right();
		static jint slide_top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_transition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_transition(QAndroidJniObject obj);
		
		// Constructors
		R_transition();
		
		// Methods
	};
} // namespace android

