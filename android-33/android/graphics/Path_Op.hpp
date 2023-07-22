#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Path_Op.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Path_Op Path_Op::DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"DIFFERENCE",
			"Landroid/graphics/Path$Op;"
		);
	}
	inline android::graphics::Path_Op Path_Op::INTERSECT()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"INTERSECT",
			"Landroid/graphics/Path$Op;"
		);
	}
	inline android::graphics::Path_Op Path_Op::REVERSE_DIFFERENCE()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Path$Op;"
		);
	}
	inline android::graphics::Path_Op Path_Op::UNION()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"UNION",
			"Landroid/graphics/Path$Op;"
		);
	}
	inline android::graphics::Path_Op Path_Op::XOR()
	{
		return getStaticObjectField(
			"android.graphics.Path$Op",
			"XOR",
			"Landroid/graphics/Path$Op;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Path_Op Path_Op::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Op;",
			arg0.object<jstring>()
		);
	}
	inline JArray Path_Op::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Path$Op",
			"values",
			"()[Landroid/graphics/Path$Op;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
