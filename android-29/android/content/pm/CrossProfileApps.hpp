#pragma once

#ifndef ANDROID_CONTENT_PM_CROSSPROFILEAPPS
#define ANDROID_CONTENT_PM_CROSSPROFILEAPPS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::content::pm
{
	class CrossProfileApps : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void startMainActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject getTargetUserProfiles();
		jstring getProfileSwitchingLabel(__jni_impl::android::os::UserHandle arg0);
		QAndroidJniObject getProfileSwitchingIconDrawable(__jni_impl::android::os::UserHandle arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../ComponentName.hpp"
#include "../../os/UserHandle.hpp"
#include "../../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void CrossProfileApps::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.CrossProfileApps",
			"(V)V");
	}
	
	// Methods
	void CrossProfileApps::startMainActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CrossProfileApps::getTargetUserProfiles()
	{
		return __thiz.callObjectMethod(
			"getTargetUserProfiles",
			"()Ljava/util/List;"
		);
	}
	jstring CrossProfileApps::getProfileSwitchingLabel(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getProfileSwitchingLabel",
			"(Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject CrossProfileApps::getProfileSwitchingIconDrawable(__jni_impl::android::os::UserHandle arg0)
	{
		return __thiz.callObjectMethod(
			"getProfileSwitchingIconDrawable",
			"(Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class CrossProfileApps : public __jni_impl::android::content::pm::CrossProfileApps
	{
	public:
		CrossProfileApps(QAndroidJniObject obj) { __thiz = obj; }
		CrossProfileApps()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_CROSSPROFILEAPPS

