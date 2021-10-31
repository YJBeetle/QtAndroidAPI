#include "./Path_Direction.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Path_Direction Path_Direction::CCW()
	{
		return getStaticObjectField(
			"android.graphics.Path$Direction",
			"CCW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	android::graphics::Path_Direction Path_Direction::CW()
	{
		return getStaticObjectField(
			"android.graphics.Path$Direction",
			"CW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	
	// QAndroidJniObject forward
	Path_Direction::Path_Direction(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Path_Direction Path_Direction::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Direction;",
			arg0
		);
	}
	jarray Path_Direction::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"values",
			"()[Landroid/graphics/Path$Direction;"
		).object<jarray>();
	}
} // namespace android::graphics

