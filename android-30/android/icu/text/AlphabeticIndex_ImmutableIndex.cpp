#include "./AlphabeticIndex_Bucket.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_ImmutableIndex.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	AlphabeticIndex_ImmutableIndex::AlphabeticIndex_ImmutableIndex(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::AlphabeticIndex_Bucket AlphabeticIndex_ImmutableIndex::getBucket(jint arg0) const
	{
		return callObjectMethod(
			"getBucket",
			"(I)Landroid/icu/text/AlphabeticIndex$Bucket;",
			arg0
		);
	}
	jint AlphabeticIndex_ImmutableIndex::getBucketCount() const
	{
		return callMethod<jint>(
			"getBucketCount",
			"()I"
		);
	}
	jint AlphabeticIndex_ImmutableIndex::getBucketIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	JObject AlphabeticIndex_ImmutableIndex::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::icu::text

