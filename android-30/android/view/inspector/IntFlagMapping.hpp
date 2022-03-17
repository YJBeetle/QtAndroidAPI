#pragma once

#include "../../../JString.hpp"
#include "./IntFlagMapping.def.hpp"

namespace android::view::inspector
{
	// Fields
	
	// Constructors
	inline IntFlagMapping::IntFlagMapping()
		: JObject(
			"android.view.inspector.IntFlagMapping",
			"()V"
		) {}
	
	// Methods
	inline void IntFlagMapping::add(jint arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"add",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline JObject IntFlagMapping::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
} // namespace android::view::inspector

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inspector;
#endif
