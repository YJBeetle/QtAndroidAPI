#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Bucket_LabelType.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::INFLOW()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"INFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::NORMAL()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"NORMAL",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::OVERFLOW()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"OVERFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::UNDERFLOW()
	{
		return getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"UNDERFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	
	// QJniObject forward
	AlphabeticIndex_Bucket_LabelType::AlphabeticIndex_Bucket_LabelType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::AlphabeticIndex_Bucket_LabelType AlphabeticIndex_Bucket_LabelType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;",
			arg0.object<jstring>()
		);
	}
	JArray AlphabeticIndex_Bucket_LabelType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"values",
			"()[Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
} // namespace android::icu::text

