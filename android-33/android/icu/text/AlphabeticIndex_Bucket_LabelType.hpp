#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Bucket_LabelType.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::INFLOW()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"INFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	inline android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::NORMAL()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"NORMAL",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	inline android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::OVERFLOW()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"OVERFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	inline android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::UNDERFLOW()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"UNDERFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;",
			arg0.object<jstring>()
		);
	}
	inline JArray AlphabeticIndex_Bucket_LabelType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"values",
			"()[Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
