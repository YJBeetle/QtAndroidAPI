#pragma once

#ifndef ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION
#define ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION

#include "../../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view::inspector
{
	class InspectionCompanion_UninitializedPropertyMapException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view::inspector


namespace __jni_impl::android::view::inspector
{
	// Fields
	
	// Constructors
	void InspectionCompanion_UninitializedPropertyMapException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.InspectionCompanion$UninitializedPropertyMapException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::inspector

namespace android::view::inspector
{
	class InspectionCompanion_UninitializedPropertyMapException : public __jni_impl::android::view::inspector::InspectionCompanion_UninitializedPropertyMapException
	{
	public:
		InspectionCompanion_UninitializedPropertyMapException(QAndroidJniObject obj) { __thiz = obj; }
		InspectionCompanion_UninitializedPropertyMapException()
		{
			__constructor();
		}
	};
} // namespace android::view::inspector

#endif // ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION

