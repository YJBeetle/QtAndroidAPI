#include "./Path_Op.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Path_Op Path_Op::DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"DIFFERENCE",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::INTERSECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"INTERSECT",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::REVERSE_DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::UNION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"UNION",
			"Landroid/graphics/Path$Op;"
		);
	}
	android::graphics::Path_Op Path_Op::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"XOR",
			"Landroid/graphics/Path$Op;"
		);
	}
	
	// QAndroidJniObject forward
	Path_Op::Path_Op(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Path_Op Path_Op::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Op;",
			arg0
		);
	}
	jarray Path_Op::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Op",
			"values",
			"()[Landroid/graphics/Path$Op;"
		).object<jarray>();
	}
} // namespace android::graphics

