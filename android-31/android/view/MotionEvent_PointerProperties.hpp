#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::view
{
	class MotionEvent_PointerProperties : public JObject
	{
	public:
		// Fields
		jint id();
		jint toolType();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MotionEvent_PointerProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MotionEvent_PointerProperties(QAndroidJniObject obj);
		
		// Constructors
		MotionEvent_PointerProperties();
		MotionEvent_PointerProperties(android::view::MotionEvent_PointerProperties &arg0);
		
		// Methods
		void clear();
		void copyFrom(android::view::MotionEvent_PointerProperties arg0);
		jboolean equals(JObject arg0);
		jint hashCode();
	};
} // namespace android::view

