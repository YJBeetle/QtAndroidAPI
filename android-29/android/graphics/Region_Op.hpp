#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Region_Op.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Region_Op Region_Op::DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"DIFFERENCE",
			"Landroid/graphics/Region$Op;"
		);
	}
	inline android::graphics::Region_Op Region_Op::INTERSECT()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"INTERSECT",
			"Landroid/graphics/Region$Op;"
		);
	}
	inline android::graphics::Region_Op Region_Op::REPLACE()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"REPLACE",
			"Landroid/graphics/Region$Op;"
		);
	}
	inline android::graphics::Region_Op Region_Op::REVERSE_DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Region$Op;"
		);
	}
	inline android::graphics::Region_Op Region_Op::UNION()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"UNION",
			"Landroid/graphics/Region$Op;"
		);
	}
	inline android::graphics::Region_Op Region_Op::XOR()
	{
		return getStaticObjectField(
			"android.graphics.Region$Op",
			"XOR",
			"Landroid/graphics/Region$Op;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Region_Op Region_Op::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Region$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Region$Op;",
			arg0.object<jstring>()
		);
	}
	inline JArray Region_Op::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Region$Op",
			"values",
			"()[Landroid/graphics/Region$Op;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

