#pragma once

#ifndef ANDROID_VIEW_VIEWDEBUG
#define ANDROID_VIEW_VIEWDEBUG

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewDebug_HierarchyTraceType;
}
namespace __jni_impl::android::view
{
	class ViewDebug_RecyclerTraceType;
}

namespace __jni_impl::android::view
{
	class ViewDebug : public __JniBaseClass
	{
	public:
		// Fields
		static jboolean TRACE_HIERARCHY();
		static jboolean TRACE_RECYCLER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void dumpCapturedView(jstring arg0, jobject arg1);
		static void dumpCapturedView(const QString &arg0, jobject arg1);
		static void startHierarchyTracing(jstring arg0, __jni_impl::android::view::View arg1);
		static void startHierarchyTracing(const QString &arg0, __jni_impl::android::view::View arg1);
		static void startRecyclerTracing(jstring arg0, __jni_impl::android::view::View arg1);
		static void startRecyclerTracing(const QString &arg0, __jni_impl::android::view::View arg1);
		static void stopHierarchyTracing();
		static void stopRecyclerTracing();
		static void trace(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewDebug_HierarchyTraceType arg1);
		static void trace(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewDebug_RecyclerTraceType arg1, jintArray arg2);
	};
} // namespace __jni_impl::android::view

#include "View.hpp"
#include "ViewDebug_HierarchyTraceType.hpp"
#include "ViewDebug_RecyclerTraceType.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jboolean ViewDebug::TRACE_HIERARCHY()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.view.ViewDebug",
			"TRACE_HIERARCHY"
		);
	}
	jboolean ViewDebug::TRACE_RECYCLER()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.view.ViewDebug",
			"TRACE_RECYCLER"
		);
	}
	
	// Constructors
	void ViewDebug::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewDebug",
			"()V"
		);
	}
	
	// Methods
	void ViewDebug::dumpCapturedView(jstring arg0, jobject arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"dumpCapturedView",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void ViewDebug::dumpCapturedView(const QString &arg0, jobject arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"dumpCapturedView",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ViewDebug::startHierarchyTracing(jstring arg0, __jni_impl::android::view::View arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"startHierarchyTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::startHierarchyTracing(const QString &arg0, __jni_impl::android::view::View arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"startHierarchyTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::startRecyclerTracing(jstring arg0, __jni_impl::android::view::View arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"startRecyclerTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::startRecyclerTracing(const QString &arg0, __jni_impl::android::view::View arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"startRecyclerTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::stopHierarchyTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"stopHierarchyTracing",
			"()V"
		);
	}
	void ViewDebug::stopRecyclerTracing()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"stopRecyclerTracing",
			"()V"
		);
	}
	void ViewDebug::trace(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewDebug_HierarchyTraceType arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"trace",
			"(Landroid/view/View;Landroid/view/ViewDebug$HierarchyTraceType;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::trace(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewDebug_RecyclerTraceType arg1, jintArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"trace",
			"(Landroid/view/View;Landroid/view/ViewDebug$RecyclerTraceType;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewDebug : public __jni_impl::android::view::ViewDebug
	{
	public:
		ViewDebug(QAndroidJniObject obj) { __thiz = obj; }
		ViewDebug()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWDEBUG

