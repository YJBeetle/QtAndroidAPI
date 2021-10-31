#include "../../view/Display.hpp"
#include "../../view/Surface.hpp"
#include "./VirtualDisplay.hpp"

namespace android::hardware::display
{
	// Fields
	
	// QAndroidJniObject forward
	VirtualDisplay::VirtualDisplay(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject VirtualDisplay::getDisplay()
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	QAndroidJniObject VirtualDisplay::getSurface()
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void VirtualDisplay::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void VirtualDisplay::resize(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"resize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void VirtualDisplay::setSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	jstring VirtualDisplay::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::display

