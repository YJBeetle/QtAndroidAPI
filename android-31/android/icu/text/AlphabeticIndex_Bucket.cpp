#include "./AlphabeticIndex_Bucket_LabelType.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Bucket.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	AlphabeticIndex_Bucket::AlphabeticIndex_Bucket(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString AlphabeticIndex_Bucket::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket::getLabelType()
	{
		return callObjectMethod(
			"getLabelType",
			"()Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	JObject AlphabeticIndex_Bucket::iterator()
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
	JString AlphabeticIndex_Bucket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

