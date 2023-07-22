#pragma once

#include "./AlphabeticIndex_Bucket_LabelType.def.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Bucket.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString AlphabeticIndex_Bucket::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	inline android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket::getLabelType() const
	{
		return callObjectMethod(
			"getLabelType",
			"()Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	inline JObject AlphabeticIndex_Bucket::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint AlphabeticIndex_Bucket::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString AlphabeticIndex_Bucket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
