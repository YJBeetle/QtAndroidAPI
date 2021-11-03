#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class VibrationEffect;
}

namespace android::os
{
	class VibrationEffect_Composition : public JObject
	{
	public:
		// Fields
		static jint PRIMITIVE_CLICK();
		static jint PRIMITIVE_QUICK_FALL();
		static jint PRIMITIVE_QUICK_RISE();
		static jint PRIMITIVE_SLOW_RISE();
		static jint PRIMITIVE_TICK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VibrationEffect_Composition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibrationEffect_Composition(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::VibrationEffect_Composition addPrimitive(jint arg0) const;
		android::os::VibrationEffect_Composition addPrimitive(jint arg0, jfloat arg1) const;
		android::os::VibrationEffect_Composition addPrimitive(jint arg0, jfloat arg1, jint arg2) const;
		android::os::VibrationEffect compose() const;
	};
} // namespace android::os

