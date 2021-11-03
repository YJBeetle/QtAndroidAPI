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
		jint getAxis() const;
		jfloat getFlat() const;
		jfloat getFuzz() const;
		jfloat getMax() const;
		jfloat getMin() const;
		jfloat getRange() const;
		jfloat getResolution() const;
		jint getSource() const;
		jboolean isFromSource(jint arg0) const;
	};
} // namespace android::view

