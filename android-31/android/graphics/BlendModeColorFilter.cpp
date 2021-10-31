#include "./BlendMode.hpp"
#include "./BlendModeColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	BlendModeColorFilter::BlendModeColorFilter(QAndroidJniObject obj) : android::graphics::ColorFilter(obj) {}
	
	// Constructors
	BlendModeColorFilter::BlendModeColorFilter(jint arg0, android::graphics::BlendMode arg1)
		: android::graphics::ColorFilter(
			"android.graphics.BlendModeColorFilter",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean BlendModeColorFilter::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BlendModeColorFilter::getColor()
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	android::graphics::BlendMode BlendModeColorFilter::getMode()
	{
		return callObjectMethod(
			"getMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	jint BlendModeColorFilter::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics

