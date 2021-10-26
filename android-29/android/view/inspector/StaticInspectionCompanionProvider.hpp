#pragma once

#ifndef ANDROID_VIEW_INSPECTOR_STATICINSPECTIONCOMPANIONPROVIDER
#define ANDROID_VIEW_INSPECTOR_STATICINSPECTIONCOMPANIONPROVIDER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::inspector
{
	class StaticInspectionCompanionProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject provide(jclass arg0);
	};
} // namespace __jni_impl::android::view::inspector


namespace __jni_impl::android::view::inspector
{
	// Fields
	
	// Constructors
	void StaticInspectionCompanionProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.StaticInspectionCompanionProvider",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject StaticInspectionCompanionProvider::provide(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"provide",
			"(Ljava/lang/Class;)Landroid/view/inspector/InspectionCompanion;",
			arg0
		);
	}
} // namespace __jni_impl::android::view::inspector

namespace android::view::inspector
{
	class StaticInspectionCompanionProvider : public __jni_impl::android::view::inspector::StaticInspectionCompanionProvider
	{
	public:
		StaticInspectionCompanionProvider(QAndroidJniObject obj) { __thiz = obj; }
		StaticInspectionCompanionProvider()
		{
			__constructor();
		}
	};
} // namespace android::view::inspector

#endif // ANDROID_VIEW_INSPECTOR_STATICINSPECTIONCOMPANIONPROVIDER

