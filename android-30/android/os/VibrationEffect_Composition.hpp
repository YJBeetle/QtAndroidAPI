#pragma once

#include "./VibrationEffect.def.hpp"
#include "./VibrationEffect_Composition.def.hpp"

namespace android::os
{
	// Fields
	inline jint VibrationEffect_Composition::PRIMITIVE_CLICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_CLICK"
		);
	}
	inline jint VibrationEffect_Composition::PRIMITIVE_QUICK_FALL()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_QUICK_FALL"
		);
	}
	inline jint VibrationEffect_Composition::PRIMITIVE_QUICK_RISE()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_QUICK_RISE"
		);
	}
	inline jint VibrationEffect_Composition::PRIMITIVE_SLOW_RISE()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_SLOW_RISE"
		);
	}
	inline jint VibrationEffect_Composition::PRIMITIVE_TICK()
	{
		return getStaticField<jint>(
			"android.os.VibrationEffect$Composition",
			"PRIMITIVE_TICK"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::VibrationEffect_Composition VibrationEffect_Composition::addPrimitive(jint arg0) const
	{
		return callObjectMethod(
			"addPrimitive",
			"(I)Landroid/os/VibrationEffect$Composition;",
			arg0
		);
	}
	inline android::os::VibrationEffect_Composition VibrationEffect_Composition::addPrimitive(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"addPrimitive",
			"(IF)Landroid/os/VibrationEffect$Composition;",
			arg0,
			arg1
		);
	}
	inline android::os::VibrationEffect_Composition VibrationEffect_Composition::addPrimitive(jint arg0, jfloat arg1, jint arg2) const
	{
		return callObjectMethod(
			"addPrimitive",
			"(IFI)Landroid/os/VibrationEffect$Composition;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::os::VibrationEffect VibrationEffect_Composition::compose() const
	{
		return callObjectMethod(
			"compose",
			"()Landroid/os/VibrationEffect;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
