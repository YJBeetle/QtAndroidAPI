#pragma once

#ifndef ANDROID_APP_LAUNCHERACTIVITY_ICONRESIZER
#define ANDROID_APP_LAUNCHERACTIVITY_ICONRESIZER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class LauncherActivity;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::app
{
	class LauncherActivity_IconResizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::LauncherActivity arg0);
		
		// Methods
		QAndroidJniObject createIconThumbnail(__jni_impl::android::graphics::drawable::Drawable arg0);
	};
} // namespace __jni_impl::android::app

#include "LauncherActivity.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void LauncherActivity_IconResizer::__constructor(__jni_impl::android::app::LauncherActivity arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.LauncherActivity$IconResizer",
			"(Landroid/app/LauncherActivity;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject LauncherActivity_IconResizer::createIconThumbnail(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"createIconThumbnail",
			"(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class LauncherActivity_IconResizer : public __jni_impl::android::app::LauncherActivity_IconResizer
	{
	public:
		LauncherActivity_IconResizer(QAndroidJniObject obj) { __thiz = obj; }
		LauncherActivity_IconResizer(__jni_impl::android::app::LauncherActivity arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_LAUNCHERACTIVITY_ICONRESIZER

