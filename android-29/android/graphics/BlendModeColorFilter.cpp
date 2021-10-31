#include "./BlendMode.hpp"
#include "./BlendModeColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	BlendModeColorFilter::BlendModeColorFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BlendModeColorFilter::BlendModeColorFilter(jint arg0, android::graphics::BlendMode arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BlendModeColorFilter",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean BlendModeColorFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BlendModeColorFilter::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	QAndroidJniObject BlendModeColorFilter::getMode()
	{
		return __thiz.callObjectMethod(
			"getMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	jint BlendModeColorFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics

