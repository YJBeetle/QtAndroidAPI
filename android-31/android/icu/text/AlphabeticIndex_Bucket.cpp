#include "./AlphabeticIndex_Bucket_LabelType.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Bucket.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	AlphabeticIndex_Bucket::AlphabeticIndex_Bucket(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString AlphabeticIndex_Bucket::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket::getLabelType() const
	{
		return callObjectMethod(
			"getLabelType",
			"()Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	JObject AlphabeticIndex_Bucket::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint AlphabeticIndex_Bucket::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JString AlphabeticIndex_Bucket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

