#pragma once

#include "../../JString.hpp"
#include "./MeshSpecification_Attribute.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline MeshSpecification_Attribute::MeshSpecification_Attribute(jint arg0, jint arg1, JString arg2)
		: JObject(
			"android.graphics.MeshSpecification$Attribute",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JString MeshSpecification_Attribute::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MeshSpecification_Attribute::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline jint MeshSpecification_Attribute::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString MeshSpecification_Attribute::toString() const
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
