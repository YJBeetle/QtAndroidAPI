#include "./ViewDebug_HierarchyTraceType.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject ViewDebug_HierarchyTraceType::BUILD_CACHE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"BUILD_CACHE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::DRAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"DRAW",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::INVALIDATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::INVALIDATE_CHILD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::INVALIDATE_CHILD_IN_PARENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"INVALIDATE_CHILD_IN_PARENT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::ON_LAYOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::ON_MEASURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"ON_MEASURE",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::REQUEST_LAYOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$HierarchyTraceType",
			"REQUEST_LAYOUT",
			"Landroid/view/ViewDebug$HierarchyTraceType;"
		);
	}
	
	ViewDebug_HierarchyTraceType::ViewDebug_HierarchyTraceType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ViewDebug_HierarchyTraceType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$HierarchyTraceType;",
			arg0
		);
	}
	QAndroidJniObject ViewDebug_HierarchyTraceType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$HierarchyTraceType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ViewDebug_HierarchyTraceType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$HierarchyTraceType",
			"values",
			"()[Landroid/view/ViewDebug$HierarchyTraceType;"
		).object<jarray>();
	}
} // namespace android::view

