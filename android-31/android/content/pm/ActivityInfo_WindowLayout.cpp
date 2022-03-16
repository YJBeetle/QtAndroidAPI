#include "./ActivityInfo_WindowLayout.hpp"

namespace android::content::pm
{
	// Fields
	jint ActivityInfo_WindowLayout::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	jint ActivityInfo_WindowLayout::height()
	{
		return getField<jint>(
			"height"
		);
	}
	jfloat ActivityInfo_WindowLayout::heightFraction()
	{
		return getField<jfloat>(
			"heightFraction"
		);
	}
	jint ActivityInfo_WindowLayout::minHeight()
	{
		return getField<jint>(
			"minHeight"
		);
	}
	jint ActivityInfo_WindowLayout::minWidth()
	{
		return getField<jint>(
			"minWidth"
		);
	}
	jint ActivityInfo_WindowLayout::width()
	{
		return getField<jint>(
			"width"
		);
	}
	jfloat ActivityInfo_WindowLayout::widthFraction()
	{
		return getField<jfloat>(
			"widthFraction"
		);
	}
	
	// Constructors
	ActivityInfo_WindowLayout::ActivityInfo_WindowLayout(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jint arg5, jint arg6)
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

