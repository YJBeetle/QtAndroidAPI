#pragma once

#ifndef ANDROID_CONTENT_PM_ACTIVITYINFO_WINDOWLAYOUT
#define ANDROID_CONTENT_PM_ACTIVITYINFO_WINDOWLAYOUT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::content::pm
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
		
		// Constructors
		void __constructor(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
	};
} // namespace __jni_impl::android::content::pm


namespace __jni_impl::android::content::pm
{
	// Fields
	jint ActivityInfo_WindowLayout::gravity()
	{
		return __thiz.getField<jint>(
			"gravity"
		);
	}
	jint ActivityInfo_WindowLayout::height()
	{
		return __thiz.getField<jint>(
			"height"
		);
	}
	jfloat ActivityInfo_WindowLayout::heightFraction()
	{
		return __thiz.getField<jfloat>(
			"heightFraction"
		);
	}
	jint ActivityInfo_WindowLayout::minHeight()
	{
		return __thiz.getField<jint>(
			"minHeight"
		);
	}
	jint ActivityInfo_WindowLayout::minWidth()
	{
		return __thiz.getField<jint>(
			"minWidth"
		);
	}
	jint ActivityInfo_WindowLayout::width()
	{
		return __thiz.getField<jint>(
			"width"
		);
	}
	jfloat ActivityInfo_WindowLayout::widthFraction()
	{
		return __thiz.getField<jfloat>(
			"widthFraction"
		);
	}
	
	// Constructors
	void ActivityInfo_WindowLayout::__constructor(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jint arg5, jint arg6)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ActivityInfo$WindowLayout",
			"(IFIFIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	
	// Methods
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ActivityInfo_WindowLayout : public __jni_impl::android::content::pm::ActivityInfo_WindowLayout
	{
	public:
		ActivityInfo_WindowLayout(QAndroidJniObject obj) { __thiz = obj; }
		ActivityInfo_WindowLayout(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jint arg5, jint arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_ACTIVITYINFO_WINDOWLAYOUT

