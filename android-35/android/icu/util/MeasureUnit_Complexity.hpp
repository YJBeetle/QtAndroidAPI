#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./MeasureUnit_Complexity.def.hpp"

namespace android::icu::util
{
	// Fields
	inline android::icu::util::MeasureUnit_Complexity MeasureUnit_Complexity::COMPOUND()
	{
		return getStaticObjectField(
			"android.icu.util.MeasureUnit$Complexity",
			"COMPOUND",
			"Landroid/icu/util/MeasureUnit$Complexity;"
		);
	}
	inline android::icu::util::MeasureUnit_Complexity MeasureUnit_Complexity::MIXED()
	{
		return getStaticObjectField(
			"android.icu.util.MeasureUnit$Complexity",
			"MIXED",
			"Landroid/icu/util/MeasureUnit$Complexity;"
		);
	}
	inline android::icu::util::MeasureUnit_Complexity MeasureUnit_Complexity::SINGLE()
	{
		return getStaticObjectField(
			"android.icu.util.MeasureUnit$Complexity",
			"SINGLE",
			"Landroid/icu/util/MeasureUnit$Complexity;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::util::MeasureUnit_Complexity MeasureUnit_Complexity::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.MeasureUnit$Complexity",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/util/MeasureUnit$Complexity;",
			arg0.object<jstring>()
		);
	}
	inline JArray MeasureUnit_Complexity::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.MeasureUnit$Complexity",
			"values",
			"()[Landroid/icu/util/MeasureUnit$Complexity;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
