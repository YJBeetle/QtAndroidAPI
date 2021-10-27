#include "../../view/Display.hpp"
#include "../../view/Surface.hpp"
#include "./VirtualDisplay.hpp"

namespace android::hardware::display
{
	// Fields
	
	VirtualDisplay::VirtualDisplay(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject VirtualDisplay::getDisplay()
	{
		return __thiz.callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	QAndroidJniObject VirtualDisplay::getSurface()
	{
		return __thiz.callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void VirtualDisplay::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void VirtualDisplay::resize(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"resize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void VirtualDisplay::setSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	jstring VirtualDisplay::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::display

