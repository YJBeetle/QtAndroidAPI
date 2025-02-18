#pragma once

#include "../../view/Display.def.hpp"
#include "../../view/Surface.def.hpp"
#include "../../../JString.hpp"
#include "./VirtualDisplay.def.hpp"

namespace android::hardware::display
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::view::Display VirtualDisplay::getDisplay() const
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	inline android::view::Surface VirtualDisplay::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline void VirtualDisplay::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void VirtualDisplay::resize(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"resize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void VirtualDisplay::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline JString VirtualDisplay::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::display

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::display;
#endif
