#pragma once

#ifndef ANDROID_VIEW_INSPECTOR_WINDOWINSPECTOR
#define ANDROID_VIEW_INSPECTOR_WINDOWINSPECTOR

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::inspector
{
	class WindowInspector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getGlobalWindowViews();
	};
} // namespace __jni_impl::android::view::inspector


namespace __jni_impl::android::view::inspector
{
	// Fields
	
	// Constructors
	void WindowInspector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.WindowInspector",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WindowInspector::getGlobalWindowViews()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.inspector.WindowInspector",
			"getGlobalWindowViews",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::android::view::inspector

namespace android::view::inspector
{
	class WindowInspector : public __jni_impl::android::view::inspector::WindowInspector
	{
	public:
		WindowInspector(QAndroidJniObject obj) { __thiz = obj; }
		WindowInspector()
		{
			__constructor();
		}
	};
} // namespace android::view::inspector

#endif // ANDROID_VIEW_INSPECTOR_WINDOWINSPECTOR

