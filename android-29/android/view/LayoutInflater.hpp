#pragma once

#ifndef ANDROID_VIEW_LAYOUTINFLATER
#define ANDROID_VIEW_LAYOUTINFLATER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::view
{
	class LayoutInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject inflate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::ViewGroup arg1);
		QAndroidJniObject inflate(jint arg0, __jni_impl::android::view::ViewGroup arg1);
		QAndroidJniObject inflate(jint arg0, __jni_impl::android::view::ViewGroup arg1, jboolean arg2);
		QAndroidJniObject inflate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::ViewGroup arg1, jboolean arg2);
		static QAndroidJniObject from(__jni_impl::android::content::Context arg0);
		QAndroidJniObject getFactory();
		QAndroidJniObject getContext();
		void setFactory(__jni_impl::__JniBaseClass arg0);
		void setFilter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getFilter();
		QAndroidJniObject getFactory2();
		QAndroidJniObject cloneInContext(__jni_impl::android::content::Context arg0);
		void setFactory2(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject createView(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject createView(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject createView(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject createView(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject onCreateView(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject onCreateView(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "View.hpp"
#include "ViewGroup.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void LayoutInflater::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.LayoutInflater",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LayoutInflater::inflate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::inflate(jint arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::inflate(jint arg0, __jni_impl::android::view::ViewGroup arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject LayoutInflater::inflate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::ViewGroup arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject LayoutInflater::from(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.LayoutInflater",
			"from",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::getFactory()
	{
		return __thiz.callObjectMethod(
			"getFactory",
			"()Landroid/view/LayoutInflater$Factory;"
		);
	}
	QAndroidJniObject LayoutInflater::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	void LayoutInflater::setFactory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFactory",
			"(Landroid/view/LayoutInflater$Factory;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutInflater::setFilter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Landroid/view/LayoutInflater$Filter;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/view/LayoutInflater$Filter;"
		);
	}
	QAndroidJniObject LayoutInflater::getFactory2()
	{
		return __thiz.callObjectMethod(
			"getFactory2",
			"()Landroid/view/LayoutInflater$Factory2;"
		);
	}
	QAndroidJniObject LayoutInflater::cloneInContext(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"cloneInContext",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object()
		);
	}
	void LayoutInflater::setFactory2(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFactory2",
			"(Landroid/view/LayoutInflater$Factory2;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(__jni_impl::android::content::Context arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
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
	QAndroidJniObject LayoutInflater::createView(__jni_impl::android::content::Context arg0, const QString &arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3)
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
	QAndroidJniObject LayoutInflater::createView(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::createView(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutInflater::onCreateView(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
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
	QAndroidJniObject LayoutInflater::onCreateView(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3)
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
} // namespace __jni_impl::android::view

namespace android::view
{
	class LayoutInflater : public __jni_impl::android::view::LayoutInflater
	{
	public:
		LayoutInflater(QAndroidJniObject obj) { __thiz = obj; }
		LayoutInflater()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_LAYOUTINFLATER

