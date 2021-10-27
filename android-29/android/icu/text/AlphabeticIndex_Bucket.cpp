#include "./AlphabeticIndex_Bucket_LabelType.hpp"
#include "./AlphabeticIndex_Bucket.hpp"

namespace android::icu::text
{
	// Fields
	
	AlphabeticIndex_Bucket::AlphabeticIndex_Bucket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring AlphabeticIndex_Bucket::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AlphabeticIndex_Bucket::getLabelType()
	{
		return __thiz.callObjectMethod(
			"getLabelType",
			"()Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	QAndroidJniObject AlphabeticIndex_Bucket::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint AlphabeticIndex_Bucket::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring AlphabeticIndex_Bucket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

