#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class InputDevice_MotionRange : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputDevice_MotionRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputDevice_MotionRange(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAxis();
		jfloat getFlat();
		jfloat getFuzz();
		jfloat getMax();
		jfloat getMin();
		jfloat getRange();
		jfloat getResolution();
		jint getSource();
		jboolean isFromSource(jint arg0);
	};
} // namespace android::view

