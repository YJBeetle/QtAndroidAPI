#pragma once

#ifndef ANDROID_APP_FRAGMENTBREADCRUMBS
#define ANDROID_APP_FRAGMENTBREADCRUMBS

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::app
{
	class FragmentBreadCrumbs : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		
		// Methods
		void onBackStackChanged();
		void setActivity(__jni_impl::android::app::Activity arg0);
		void setMaxVisible(jint arg0);
		void setOnBreadCrumbClickListener(__jni_impl::__JniBaseClass arg0);
		void setParentTitle(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		void setParentTitle(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		void setTitle(jstring arg0, jstring arg1);
		void setTitle(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::app

#include "Activity.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void FragmentBreadCrumbs::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	void FragmentBreadCrumbs::onBackStackChanged()
	{
		__thiz.callMethod<void>(
			"onBackStackChanged",
			"()V"
		);
	}
	void FragmentBreadCrumbs::setActivity(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"setActivity",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::setMaxVisible(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxVisible",
			"(I)V",
			arg0
		);
	}
	void FragmentBreadCrumbs::setOnBreadCrumbClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnBreadCrumbClickListener",
			"(Landroid/app/FragmentBreadCrumbs$OnBreadCrumbClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::setParentTitle(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::setParentTitle(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::setTitle(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void FragmentBreadCrumbs::setTitle(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentBreadCrumbs : public __jni_impl::android::app::FragmentBreadCrumbs
	{
	public:
		FragmentBreadCrumbs(QAndroidJniObject obj) { __thiz = obj; }
		FragmentBreadCrumbs(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		FragmentBreadCrumbs(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FragmentBreadCrumbs(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENTBREADCRUMBS

