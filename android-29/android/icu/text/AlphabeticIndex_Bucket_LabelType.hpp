#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex_Bucket_LabelType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INFLOW();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject OVERFLOW();
		static QAndroidJniObject UNDERFLOW();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
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
	
	// Constructors
	void AlphabeticIndex_Bucket_LabelType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex$Bucket$LabelType",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class AlphabeticIndex_Bucket_LabelType : public __jni_impl::android::icu::text::AlphabeticIndex_Bucket_LabelType
	{
	public:
		AlphabeticIndex_Bucket_LabelType(QAndroidJniObject obj) { __thiz = obj; }
		AlphabeticIndex_Bucket_LabelType()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

