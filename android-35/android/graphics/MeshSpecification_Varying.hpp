#pragma once

#include "../../JString.hpp"
#include "./MeshSpecification_Varying.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline MeshSpecification_Varying::MeshSpecification_Varying(jint arg0, JString arg1)
		: JObject(
			"android.graphics.MeshSpecification$Varying",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JString MeshSpecification_Varying::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MeshSpecification_Varying::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString MeshSpecification_Varying::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
