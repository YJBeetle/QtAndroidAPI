#include "./VisibilitySetterAction.hpp"
#include "./VisibilitySetterAction_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	VisibilitySetterAction_Builder::VisibilitySetterAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VisibilitySetterAction_Builder::VisibilitySetterAction_Builder(jint arg0, jint arg1)
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
} // namespace android::service::autofill

