#include "../../view/Display.hpp"
#include "../../view/Surface.hpp"
#include "../../../JString.hpp"
#include "./VirtualDisplay.hpp"

namespace android::hardware::display
{
	// Fields
	
	// QAndroidJniObject forward
	VirtualDisplay::VirtualDisplay(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::Display VirtualDisplay::getDisplay() const
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	android::view::Surface VirtualDisplay::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void VirtualDisplay::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void VirtualDisplay::resize(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"resize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void VirtualDisplay::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	JString VirtualDisplay::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::display

