#include "../content/Context.hpp"
#include "./View.hpp"
#include "./ViewGroup.hpp"
#include "./LayoutInflater.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	LayoutInflater::LayoutInflater(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::LayoutInflater LayoutInflater::from(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.view.LayoutInflater",
			"from",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	android::view::LayoutInflater LayoutInflater::cloneInContext(android::content::Context arg0)
	{
		return callObjectMethod(
			"cloneInContext",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	android::view::View LayoutInflater::createView(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"createView",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::content::Context LayoutInflater::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	__JniBaseClass LayoutInflater::getFactory()
	{
		return callObjectMethod(
			"getFactory",
			"()Landroid/view/LayoutInflater$Factory;"
		);
	}
	__JniBaseClass LayoutInflater::getFactory2()
	{
		return callObjectMethod(
			"getFactory2",
			"()Landroid/view/LayoutInflater$Factory2;"
		);
	}
	__JniBaseClass LayoutInflater::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/view/LayoutInflater$Filter;"
		);
	}
	android::view::View LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1)
	{
		return callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object()
		);
	}
	android::view::View LayoutInflater::inflate(__JniBaseClass arg0, android::view::ViewGroup arg1)
	{
		return callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::View LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2)
	{
		return callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::view::View LayoutInflater::inflate(__JniBaseClass arg0, android::view::ViewGroup arg1, jboolean arg2)
	{
		return callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void LayoutInflater::setFactory(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFactory",
			"(Landroid/view/LayoutInflater$Factory;)V",
			arg0.object()
		);
	}
	void LayoutInflater::setFactory2(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFactory2",
			"(Landroid/view/LayoutInflater$Factory2;)V",
			arg0.object()
		);
	}
	void LayoutInflater::setFilter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFilter",
			"(Landroid/view/LayoutInflater$Filter;)V",
			arg0.object()
		);
	}
} // namespace android::view

