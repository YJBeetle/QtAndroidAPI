#pragma once

#ifndef ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE
#define ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::view
{
	class ViewDebug_HierarchyTraceType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INVALIDATE();
		static QAndroidJniObject INVALIDATE_CHILD();
		static QAndroidJniObject INVALIDATE_CHILD_IN_PARENT();
		static QAndroidJniObject REQUEST_LAYOUT();
		static QAndroidJniObject ON_LAYOUT();
		static QAndroidJniObject ON_MEASURE();
		static QAndroidJniObject DRAW();
		static QAndroidJniObject BUILD_CACHE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject ViewDebug_HierarchyTraceType::INVALIDATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::INVALIDATE_CHILD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::INVALIDATE_CHILD_IN_PARENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD_IN_PARENT",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::REQUEST_LAYOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"REQUEST_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::ON_LAYOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::ON_MEASURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_MEASURE",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::DRAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"DRAW",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::BUILD_CACHE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"BUILD_CACHE",
			"Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	
	// Constructors
	void ViewDebug_HierarchyTraceType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewDebug$HierarchyTraceType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ViewDebug_HierarchyTraceType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"values",
			"()[Landroid/view/ViewDebug$HierarchyTraceType;");
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$HierarchyTraceType;",
			arg0);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewDebug_HierarchyTraceType : public __jni_impl::android::view::ViewDebug_HierarchyTraceType
	{
	public:
		ViewDebug_HierarchyTraceType(QAndroidJniObject obj) { __thiz = obj; }
		ViewDebug_HierarchyTraceType()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE

