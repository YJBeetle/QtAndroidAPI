#pragma once

#ifndef ANDROID_VIEW_VIEWDEBUG_RECYCLERTRACETYPE
#define ANDROID_VIEW_VIEWDEBUG_RECYCLERTRACETYPE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::view
{
	class ViewDebug_RecyclerTraceType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BIND_VIEW();
		static QAndroidJniObject MOVE_FROM_ACTIVE_TO_SCRAP_HEAP();
		static QAndroidJniObject MOVE_TO_SCRAP_HEAP();
		static QAndroidJniObject NEW_VIEW();
		static QAndroidJniObject RECYCLE_FROM_ACTIVE_HEAP();
		static QAndroidJniObject RECYCLE_FROM_SCRAP_HEAP();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject ViewDebug_RecyclerTraceType::BIND_VIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"BIND_VIEW",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_RecyclerTraceType::MOVE_FROM_ACTIVE_TO_SCRAP_HEAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"MOVE_FROM_ACTIVE_TO_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_RecyclerTraceType::MOVE_TO_SCRAP_HEAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"MOVE_TO_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_RecyclerTraceType::NEW_VIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"NEW_VIEW",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_RecyclerTraceType::RECYCLE_FROM_ACTIVE_HEAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"RECYCLE_FROM_ACTIVE_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	QAndroidJniObject ViewDebug_RecyclerTraceType::RECYCLE_FROM_SCRAP_HEAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewDebug$RecyclerTraceType",
			"RECYCLE_FROM_SCRAP_HEAP",
			"Landroid/view/ViewDebug$RecyclerTraceType;"
		);
	}
	
	// Constructors
	void ViewDebug_RecyclerTraceType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewDebug$RecyclerTraceType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ViewDebug_RecyclerTraceType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$RecyclerTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$RecyclerTraceType;",
			arg0
		);
	}
	QAndroidJniObject ViewDebug_RecyclerTraceType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$RecyclerTraceType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/view/ViewDebug$RecyclerTraceType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ViewDebug_RecyclerTraceType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewDebug$RecyclerTraceType",
			"values",
			"()[Landroid/view/ViewDebug$RecyclerTraceType;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewDebug_RecyclerTraceType : public __jni_impl::android::view::ViewDebug_RecyclerTraceType
	{
	public:
		ViewDebug_RecyclerTraceType(QAndroidJniObject obj) { __thiz = obj; }
		ViewDebug_RecyclerTraceType()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWDEBUG_RECYCLERTRACETYPE

