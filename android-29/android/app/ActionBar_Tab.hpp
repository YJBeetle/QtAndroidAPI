#pragma once

#ifndef ANDROID_APP_ACTIONBAR_TAB
#define ANDROID_APP_ACTIONBAR_TAB

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class ActionBar_Tab : public __JniBaseClass
	{
	public:
		// Fields
		static jint INVALID_POSITION();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getContentDescription();
		QAndroidJniObject getCustomView();
		QAndroidJniObject getIcon();
		jint getPosition();
		jobject getTag();
		jstring getText();
		void select();
		QAndroidJniObject setContentDescription(jint arg0);
		QAndroidJniObject setContentDescription(jstring arg0);
		QAndroidJniObject setContentDescription(const QString &arg0);
		QAndroidJniObject setCustomView(__jni_impl::android::view::View arg0);
		QAndroidJniObject setCustomView(jint arg0);
		QAndroidJniObject setIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject setIcon(jint arg0);
		QAndroidJniObject setTabListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setTag(jobject arg0);
		QAndroidJniObject setText(jint arg0);
		QAndroidJniObject setText(jstring arg0);
		QAndroidJniObject setText(const QString &arg0);
	};
} // namespace __jni_impl::android::app

#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint ActionBar_Tab::INVALID_POSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActionBar$Tab",
			"INVALID_POSITION"
		);
	}
	
	// Constructors
	void ActionBar_Tab::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActionBar$Tab",
			"()V"
		);
	}
	
	// Methods
	jstring ActionBar_Tab::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ActionBar_Tab::getCustomView()
	{
		return __thiz.callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject ActionBar_Tab::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ActionBar_Tab::getPosition()
	{
		return __thiz.callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jobject ActionBar_Tab::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring ActionBar_Tab::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ActionBar_Tab::select()
	{
		__thiz.callMethod<void>(
			"select",
			"()V"
		);
	}
	QAndroidJniObject ActionBar_Tab::setContentDescription(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContentDescription",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	QAndroidJniObject ActionBar_Tab::setContentDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	QAndroidJniObject ActionBar_Tab::setContentDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ActionBar_Tab::setCustomView(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomView",
			"(Landroid/view/View;)Landroid/app/ActionBar$Tab;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActionBar_Tab::setCustomView(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomView",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	QAndroidJniObject ActionBar_Tab::setIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/ActionBar$Tab;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActionBar_Tab::setIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	QAndroidJniObject ActionBar_Tab::setTabListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTabListener",
			"(Landroid/app/ActionBar$TabListener;)Landroid/app/ActionBar$Tab;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActionBar_Tab::setTag(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"setTag",
			"(Ljava/lang/Object;)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	QAndroidJniObject ActionBar_Tab::setText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	QAndroidJniObject ActionBar_Tab::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	QAndroidJniObject ActionBar_Tab::setText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActionBar_Tab : public __jni_impl::android::app::ActionBar_Tab
	{
	public:
		ActionBar_Tab(QAndroidJniObject obj) { __thiz = obj; }
		ActionBar_Tab()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIONBAR_TAB

