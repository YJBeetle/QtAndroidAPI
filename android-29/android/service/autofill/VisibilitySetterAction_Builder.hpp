#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class VisibilitySetterAction;
}

namespace __jni_impl::android::service::autofill
{
	class VisibilitySetterAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setVisibility(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "./VisibilitySetterAction.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void VisibilitySetterAction_Builder::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.VisibilitySetterAction$Builder",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject VisibilitySetterAction_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/VisibilitySetterAction;"
		);
	}
	QAndroidJniObject VisibilitySetterAction_Builder::setVisibility(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setVisibility",
			"(II)Landroid/service/autofill/VisibilitySetterAction$Builder;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class VisibilitySetterAction_Builder : public __jni_impl::android::service::autofill::VisibilitySetterAction_Builder
	{
	public:
		VisibilitySetterAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
		VisibilitySetterAction_Builder(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::autofill

