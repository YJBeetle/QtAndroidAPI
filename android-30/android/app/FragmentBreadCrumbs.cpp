#include "./Activity.hpp"
#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./FragmentBreadCrumbs.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	FragmentBreadCrumbs::FragmentBreadCrumbs(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	FragmentBreadCrumbs::FragmentBreadCrumbs(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	FragmentBreadCrumbs::FragmentBreadCrumbs(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	FragmentBreadCrumbs::FragmentBreadCrumbs(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.app.FragmentBreadCrumbs",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	void FragmentBreadCrumbs::onBackStackChanged() const
	{
		callMethod<void>(
			"onBackStackChanged",
			"()V"
		);
	}
	void FragmentBreadCrumbs::setActivity(android::app::Activity arg0) const
	{
		callMethod<void>(
			"setActivity",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void FragmentBreadCrumbs::setMaxVisible(jint arg0) const
	{
		callMethod<void>(
			"setMaxVisible",
			"(I)V",
			arg0
		);
	}
	void FragmentBreadCrumbs::setOnBreadCrumbClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnBreadCrumbClickListener",
			"(Landroid/app/FragmentBreadCrumbs$OnBreadCrumbClickListener;)V",
			arg0.object()
		);
	}
	void FragmentBreadCrumbs::setParentTitle(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"setParentTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void FragmentBreadCrumbs::setTitle(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::app

