#include "./Path_FillType.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Path_FillType Path_FillType::EVEN_ODD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"EVEN_ODD",
			"Landroid/graphics/Path$FillType;"
		);
	}
	android::graphics::Path_FillType Path_FillType::INVERSE_EVEN_ODD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_EVEN_ODD",
			"Landroid/graphics/Path$FillType;"
		);
	}
	android::graphics::Path_FillType Path_FillType::INVERSE_WINDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_WINDING",
			"Landroid/graphics/Path$FillType;"
		);
	}
	android::graphics::Path_FillType Path_FillType::WINDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"WINDING",
			"Landroid/graphics/Path$FillType;"
		);
	}
	
	// QAndroidJniObject forward
	Path_FillType::Path_FillType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Path_FillType Path_FillType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$FillType;",
			arg0
		);
	}
	jarray Path_FillType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"values",
			"()[Landroid/graphics/Path$FillType;"
		).object<jarray>();
	}
} // namespace android::graphics

