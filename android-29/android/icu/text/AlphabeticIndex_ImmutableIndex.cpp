#include "./AlphabeticIndex_Bucket.hpp"
#include "./AlphabeticIndex_ImmutableIndex.hpp"

namespace android::icu::text
{
	// Fields
	
	AlphabeticIndex_ImmutableIndex::AlphabeticIndex_ImmutableIndex(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AlphabeticIndex_ImmutableIndex::getBucket(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBucket",
			"(I)Landroid/icu/text/AlphabeticIndex$Bucket;",
			arg0
		);
	}
	jint AlphabeticIndex_ImmutableIndex::getBucketCount()
	{
		return __thiz.callMethod<jint>(
			"getBucketCount",
			"()I"
		);
	}
	jint AlphabeticIndex_ImmutableIndex::getBucketIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getBucketIndex",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex_ImmutableIndex::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::icu::text

