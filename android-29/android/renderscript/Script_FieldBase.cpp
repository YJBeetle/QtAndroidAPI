#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "./Script_FieldBase.hpp"

namespace android::renderscript
{
	// Fields
	
	Script_FieldBase::Script_FieldBase(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Script_FieldBase::getAllocation()
	{
		return __thiz.callObjectMethod(
			"getAllocation",
			"()Landroid/renderscript/Allocation;"
		);
	}
	QAndroidJniObject Script_FieldBase::getElement()
	{
		return __thiz.callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	QAndroidJniObject Script_FieldBase::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
		);
	}
	void Script_FieldBase::updateAllocation()
	{
		__thiz.callMethod<void>(
			"updateAllocation",
			"()V"
		);
	}
} // namespace android::renderscript

