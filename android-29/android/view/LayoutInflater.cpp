#include "../content/Context.hpp"
#include "./View.hpp"
#include "./ViewGroup.hpp"
#include "./LayoutInflater.hpp"

namespace android::view
{
	// Fields
	
	LayoutInflater::LayoutInflater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject LayoutInflater::from(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.LayoutInflater",
			"from",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::cloneInContext(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"cloneInContext",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(const QString &arg0, const QString &arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(android::content::Context arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(android::content::Context arg0, const QString &arg1, const QString &arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject LayoutInflater::getFactory()
	{
		return __thiz.callObjectMethod(
			"getFactory",
			"()Landroid/view/LayoutInflater$Factory;"
		);
	}
	QAndroidJniObject LayoutInflater::getFactory2()
	{
		return __thiz.callObjectMethod(
			"getFactory2",
			"()Landroid/view/LayoutInflater$Factory2;"
		);
	}
	QAndroidJniObject LayoutInflater::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/view/LayoutInflater$Filter;"
		);
	}
	QAndroidJniObject LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::inflate(__JniBaseClass arg0, android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject LayoutInflater::inflate(__JniBaseClass arg0, android::view::ViewGroup arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject LayoutInflater::onCreateView(android::content::Context arg0, android::view::View arg1, jstring arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/content/Context;Landroid/view/View;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::onCreateView(android::content::Context arg0, android::view::View arg1, const QString &arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/content/Context;Landroid/view/View;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	void LayoutInflater::setFactory(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFactory",
			"(Landroid/view/LayoutInflater$Factory;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutInflater::setFactory2(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFactory2",
			"(Landroid/view/LayoutInflater$Factory2;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutInflater::setFilter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Landroid/view/LayoutInflater$Filter;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

