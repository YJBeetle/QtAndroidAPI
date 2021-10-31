#include "./Path_Direction.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Path_Direction::CCW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Direction",
			"CCW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	QAndroidJniObject Path_Direction::CW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Direction",
			"CW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	
	Path_Direction::Path_Direction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Path_Direction::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Direction;",
			arg0
		);
	}
	jarray Path_Direction::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"values",
			"()[Landroid/graphics/Path$Direction;"
		).object<jarray>();
	}
} // namespace android::graphics

