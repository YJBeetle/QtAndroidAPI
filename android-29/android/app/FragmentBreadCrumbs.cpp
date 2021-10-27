#include "./Activity.hpp"
#include "../content/Context.hpp"
#include "./FragmentBreadCrumbs.hpp"

namespace android::app
{
	// Fields
	
	FragmentBreadCrumbs::FragmentBreadCrumbs(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FragmentBreadCrumbs::FragmentBreadCrumbs(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	FragmentBreadCrumbs::FragmentBreadCrumbs(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	FragmentBreadCrumbs::FragmentBreadCrumbs(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
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
	void FragmentBreadCrumbs::setActivity(android::app::Activity arg0)
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
	void FragmentBreadCrumbs::setOnBreadCrumbClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnBreadCrumbClickListener",
			"(Landroid/app/FragmentBreadCrumbs$OnBreadCrumbClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::setParentTitle(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void FragmentBreadCrumbs::setParentTitle(const QString &arg0, const QString &arg1, __JniBaseClass arg2)
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
} // namespace android::app

