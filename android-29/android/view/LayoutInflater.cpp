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
	QAndroidJniObject LayoutInflater::from(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.LayoutInflater",
			"from",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	QAndroidJniObject LayoutInflater::cloneInContext(android::content::Context arg0)
	{
		return callObjectMethod(
			"cloneInContext",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"createView",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(android::content::Context arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
	{
		return callObjectMethod(
			"createView",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	QAndroidJniObject LayoutInflater::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject LayoutInflater::getFactory()
	{
		return callObjectMethod(
			"getFactory",
			"()Landroid/view/LayoutInflater$Factory;"
		);
	}
	QAndroidJniObject LayoutInflater::getFactory2()
	{
		return callObjectMethod(
			"getFactory2",
			"()Landroid/view/LayoutInflater$Factory2;"
		);
	}
	QAndroidJniObject LayoutInflater::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/view/LayoutInflater$Filter;"
		);
	}
	QAndroidJniObject LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1)
	{
		return callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject LayoutInflater::inflate(__JniBaseClass arg0, android::view::ViewGroup arg1)
	{
		return callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2)
	{
		return callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject LayoutInflater::inflate(__JniBaseClass arg0, android::view::ViewGroup arg1, jboolean arg2)
	{
		return callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject LayoutInflater::onCreateView(android::content::Context arg0, android::view::View arg1, jstring arg2, __JniBaseClass arg3)
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/content/Context;Landroid/view/View;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
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
