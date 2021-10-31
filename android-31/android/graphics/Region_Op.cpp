#include "./Region_Op.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Region_Op Region_Op::DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"DIFFERENCE",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::INTERSECT()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"INTERSECT",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::REPLACE()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"REPLACE",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::REVERSE_DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::UNION()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"UNION",
			"Landroid/graphics/Region$Op;"
		);
	}
	android::graphics::Region_Op Region_Op::XOR()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"XOR",
			"Landroid/graphics/Region$Op;"
		);
	}
	
	// QAndroidJniObject forward
	Region_Op::Region_Op(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Region_Op Region_Op::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Region$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Region$Op;",
			arg0
		);
	}
	jarray Region_Op::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Region$Op",
			"values",
			"()[Landroid/graphics/Region$Op;"
		).object<jarray>();
	}
} // namespace android::graphics
