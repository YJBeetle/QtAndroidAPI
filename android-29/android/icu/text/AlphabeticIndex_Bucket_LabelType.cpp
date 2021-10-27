#include "./AlphabeticIndex_Bucket_LabelType.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject AlphabeticIndex_Bucket_LabelType::INFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"INFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	QAndroidJniObject AlphabeticIndex_Bucket_LabelType::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"NORMAL",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	QAndroidJniObject AlphabeticIndex_Bucket_LabelType::OVERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"OVERFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	QAndroidJniObject AlphabeticIndex_Bucket_LabelType::UNDERFLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"UNDERFLOW",
			"Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		);
	}
	
	AlphabeticIndex_Bucket_LabelType::AlphabeticIndex_Bucket_LabelType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AlphabeticIndex_Bucket_LabelType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;",
			arg0
		);
	}
	QAndroidJniObject AlphabeticIndex_Bucket_LabelType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray AlphabeticIndex_Bucket_LabelType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"values",
			"()[Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;"
		).object<jarray>();
	}
} // namespace android::icu::text

