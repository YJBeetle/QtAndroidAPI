#include "./View.hpp"
#include "./ViewDebug_HierarchyTraceType.hpp"
#include "./ViewDebug_RecyclerTraceType.hpp"
#include "./ViewDebug.hpp"

namespace android::view
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
	
	ViewDebug::ViewDebug(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewDebug::ViewDebug()
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
	void ViewDebug::startHierarchyTracing(jstring arg0, android::view::View arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"startHierarchyTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::startHierarchyTracing(const QString &arg0, android::view::View arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"startHierarchyTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::startRecyclerTracing(jstring arg0, android::view::View arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"startRecyclerTracing",
			"(Ljava/lang/String;Landroid/view/View;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::startRecyclerTracing(const QString &arg0, android::view::View arg1)
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
	void ViewDebug::trace(android::view::View arg0, android::view::ViewDebug_HierarchyTraceType arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.ViewDebug",
			"trace",
			"(Landroid/view/View;Landroid/view/ViewDebug$HierarchyTraceType;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewDebug::trace(android::view::View arg0, android::view::ViewDebug_RecyclerTraceType arg1, jintArray arg2)
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
} // namespace android::view

