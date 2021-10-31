#include "./AlphabeticIndex_Bucket_LabelType.hpp"
#include "./AlphabeticIndex_Bucket.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	AlphabeticIndex_Bucket::AlphabeticIndex_Bucket(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring AlphabeticIndex_Bucket::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket::getLabelType()
	{
		return callObjectMethod(
			"getLabelType",
			"()Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	__JniBaseClass AlphabeticIndex_Bucket::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint AlphabeticIndex_Bucket::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring AlphabeticIndex_Bucket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

