#pragma once

#include "./AlphabeticIndex_Bucket.def.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_ImmutableIndex.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::AlphabeticIndex_Bucket AlphabeticIndex_ImmutableIndex::getBucket(jint arg0) const
	{
		return callObjectMethod(
			"getBucket",
			"(I)Landroid/icu/text/AlphabeticIndex$Bucket;",
			arg0
		);
	}
	inline jint AlphabeticIndex_ImmutableIndex::getBucketCount() const
	{
		return callMethod<jint>(
			"getBucketCount",
			"()I"
		);
	}
	inline jint AlphabeticIndex_ImmutableIndex::getBucketIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline JObject AlphabeticIndex_ImmutableIndex::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
