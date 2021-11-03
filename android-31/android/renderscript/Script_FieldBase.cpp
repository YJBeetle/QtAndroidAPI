#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "./Script_FieldBase.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Script_FieldBase::Script_FieldBase(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Allocation Script_FieldBase::getAllocation() const
	{
		return callObjectMethod(
			"getAllocation",
			"()Landroid/renderscript/Allocation;"
		);
	}
	android::renderscript::Element Script_FieldBase::getElement() const
	{
		return callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	android::renderscript::Type Script_FieldBase::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
		);
	}
	void Script_FieldBase::updateAllocation() const
	{
		callMethod<void>(
			"updateAllocation",
			"()V"
		);
	}
} // namespace android::renderscript

