#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::content::pm
{
	class ActivityInfo_WindowLayout : public __JniBaseClass
	{
	public:
		// Fields
		jint gravity();
		jint height();
		jfloat heightFraction();
		jint minHeight();
		jint minWidth();
		jint width();
		jfloat widthFraction();
		
		ActivityInfo_WindowLayout(QAndroidJniObject obj);
		// Constructors
		ActivityInfo_WindowLayout(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jint arg5, jint arg6);
		ActivityInfo_WindowLayout() = default;
		
		// Methods
	};
} // namespace android::content::pm

