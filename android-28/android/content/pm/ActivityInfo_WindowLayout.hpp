#pragma once

#include "./ActivityInfo_WindowLayout.def.hpp"

namespace android::content::pm
{
	// Fields
	inline jint ActivityInfo_WindowLayout::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	inline jint ActivityInfo_WindowLayout::height()
	{
		return getField<jint>(
			"height"
		);
	}
	inline jfloat ActivityInfo_WindowLayout::heightFraction()
	{
		return getField<jfloat>(
			"heightFraction"
		);
	}
	inline jint ActivityInfo_WindowLayout::minHeight()
	{
		return getField<jint>(
			"minHeight"
		);
	}
	inline jint ActivityInfo_WindowLayout::minWidth()
	{
		return getField<jint>(
			"minWidth"
		);
	}
	inline jint ActivityInfo_WindowLayout::width()
	{
		return getField<jint>(
			"width"
		);
	}
	inline jfloat ActivityInfo_WindowLayout::widthFraction()
	{
		return getField<jfloat>(
			"widthFraction"
		);
	}
	
	// Constructors
	inline ActivityInfo_WindowLayout::ActivityInfo_WindowLayout(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jint arg5, jint arg6)
		: JObject(
			"android.content.pm.ActivityInfo$WindowLayout",
			"(IFIFIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
