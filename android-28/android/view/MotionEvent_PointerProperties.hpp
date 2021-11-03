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
		
		// QJniObject forward
		template<typename ...Ts> explicit MotionEvent_PointerProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MotionEvent_PointerProperties(QJniObject obj);
		
		// Constructors
		MotionEvent_PointerProperties();
		MotionEvent_PointerProperties(android::view::MotionEvent_PointerProperties &arg0);
		
		// Methods
		void clear() const;
		void copyFrom(android::view::MotionEvent_PointerProperties arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::view

