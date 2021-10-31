#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "./Script_FieldBase.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Script_FieldBase::Script_FieldBase(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Script_FieldBase::getAllocation()
	{
		return callObjectMethod(
			"getAllocation",
			"()Landroid/renderscript/Allocation;"
		);
	}
	QAndroidJniObject Script_FieldBase::getElement()
	{
		return callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	QAndroidJniObject Script_FieldBase::getType()
	{
		return callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
		);
	}
	void Script_FieldBase::updateAllocation()
	{
		callMethod<void>(
			"updateAllocation",
			"()V"
		);
	}
} // namespace android::renderscript

