#pragma once

#ifndef ANDROID_WIDGET_TABHOST_TABSPEC
#define ANDROID_WIDGET_TABHOST_TABSPEC

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::widget
{
	class TabHost;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::widget
{
	class TabHost_TabSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getTag();
		QAndroidJniObject setIndicator(jstring arg0);
		QAndroidJniObject setIndicator(const QString &arg0);
		QAndroidJniObject setIndicator(__jni_impl::android::view::View arg0);
		QAndroidJniObject setIndicator(jstring arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		QAndroidJniObject setIndicator(const QString &arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		QAndroidJniObject setContent(jint arg0);
		QAndroidJniObject setContent(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject setContent(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "TabHost.hpp"
#include "../view/View.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../content/Intent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TabHost_TabSpec::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost$TabSpec",
			"(V)V");
	}
	
	// Methods
	jstring TabHost_TabSpec::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Landroid/view/View;)Landroid/widget/TabHost$TabSpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(jstring arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setIndicator(const QString &arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		return __thiz.callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setContent(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(I)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	QAndroidJniObject TabHost_TabSpec::setContent(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TabHost_TabSpec::setContent(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(Landroid/widget/TabHost$TabContentFactory;)Landroid/widget/TabHost$TabSpec;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TabHost_TabSpec : public __jni_impl::android::widget::TabHost_TabSpec
	{
	public:
		TabHost_TabSpec(QAndroidJniObject obj) { __thiz = obj; }
		TabHost_TabSpec()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TABHOST_TABSPEC

