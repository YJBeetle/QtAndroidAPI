#pragma once

#include "./Allocation.def.hpp"
#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Type.def.hpp"
#include "./Script_FieldBase.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::Allocation Script_FieldBase::getAllocation() const
	{
		return callObjectMethod(
			"getAllocation",
			"()Landroid/renderscript/Allocation;"
		);
	}
	inline android::renderscript::Element Script_FieldBase::getElement() const
	{
		return callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	inline android::renderscript::Type Script_FieldBase::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
		);
	}
	inline void Script_FieldBase::updateAllocation() const
	{
		callMethod<void>(
			"updateAllocation",
			"()V"
		);
	}
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
