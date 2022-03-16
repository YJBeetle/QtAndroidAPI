#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintAttributes_Margins.def.hpp"

namespace android::print
{
	// Fields
	inline android::print::PrintAttributes_Margins PrintAttributes_Margins::NO_MARGINS()
	{
		return getStaticObjectField(
			"android.print.PrintAttributes$Margins",
			"NO_MARGINS",
			"Landroid/print/PrintAttributes$Margins;"
		);
	}
	
	// Constructors
	inline PrintAttributes_Margins::PrintAttributes_Margins(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.print.PrintAttributes$Margins",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean PrintAttributes_Margins::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PrintAttributes_Margins::getBottomMils() const
	{
		return callMethod<jint>(
			"getBottomMils",
			"()I"
		);
	}
	inline jint PrintAttributes_Margins::getLeftMils() const
	{
		return callMethod<jint>(
			"getLeftMils",
			"()I"
		);
	}
	inline jint PrintAttributes_Margins::getRightMils() const
	{
		return callMethod<jint>(
			"getRightMils",
			"()I"
		);
	}
	inline jint PrintAttributes_Margins::getTopMils() const
	{
		return callMethod<jint>(
			"getTopMils",
			"()I"
		);
	}
	inline jint PrintAttributes_Margins::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PrintAttributes_Margins::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::print

// Base class headers

