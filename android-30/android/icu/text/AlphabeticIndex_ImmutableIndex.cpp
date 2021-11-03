#include "./AlphabeticIndex_Bucket.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_ImmutableIndex.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	AlphabeticIndex_ImmutableIndex::AlphabeticIndex_ImmutableIndex(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::AlphabeticIndex_Bucket AlphabeticIndex_ImmutableIndex::getBucket(jint arg0)
	{
		return callObjectMethod(
			"getBucket",
			"(I)Landroid/icu/text/AlphabeticIndex$Bucket;",
			arg0
		);
	}
	jint AlphabeticIndex_ImmutableIndex::getBucketCount()
	{
		return callMethod<jint>(
			"getBucketCount",
			"()I"
		);
	}
	jint AlphabeticIndex_ImmutableIndex::getBucketIndex(JString arg0)
	{
		return callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	JObject AlphabeticIndex_ImmutableIndex::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::icu::text

