#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class ResolveInfo;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class LauncherActivity_ListItem : public __JniBaseClass
	{
	public:
		// Fields
		jstring className();
		QAndroidJniObject extras();
		QAndroidJniObject icon();
		jstring label();
		jstring packageName();
		QAndroidJniObject resolveInfo();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::app

#include "../content/pm/ResolveInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jstring LauncherActivity_ListItem::className()
	{
		return __thiz.getObjectField(
			"className",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LauncherActivity_ListItem::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject LauncherActivity_ListItem::icon()
	{
		return __thiz.getObjectField(
			"icon",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring LauncherActivity_ListItem::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LauncherActivity_ListItem::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LauncherActivity_ListItem::resolveInfo()
	{
		return __thiz.getObjectField(
			"resolveInfo",
			"Landroid/content/pm/ResolveInfo;"
		);
	}
	
	// Constructors
	void LauncherActivity_ListItem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.LauncherActivity$ListItem",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class LauncherActivity_ListItem : public __jni_impl::android::app::LauncherActivity_ListItem
	{
	public:
		LauncherActivity_ListItem(QAndroidJniObject obj) { __thiz = obj; }
		LauncherActivity_ListItem()
		{
			__constructor();
		}
	};
} // namespace android::app

