#pragma once

#ifndef ANDROID_ICU_TEXT_ALPHABETICINDEX_BUCKET
#define ANDROID_ICU_TEXT_ALPHABETICINDEX_BUCKET

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex_Bucket_LabelType;
}

namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex_Bucket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint size();
		QAndroidJniObject iterator();
		QAndroidJniObject getLabel();
		QAndroidJniObject getLabelType();
	};
} // namespace __jni_impl::android::icu::text

#include "AlphabeticIndex_Bucket_LabelType.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void AlphabeticIndex_Bucket::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex$Bucket",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AlphabeticIndex_Bucket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint AlphabeticIndex_Bucket::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject AlphabeticIndex_Bucket::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject AlphabeticIndex_Bucket::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AlphabeticIndex_Bucket::getLabelType()
	{
		return __thiz.callObjectMethod(
			"getLabelType",
			"()Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class AlphabeticIndex_Bucket : public __jni_impl::android::icu::text::AlphabeticIndex_Bucket
	{
	public:
		AlphabeticIndex_Bucket(QAndroidJniObject obj) { __thiz = obj; }
		AlphabeticIndex_Bucket()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_ALPHABETICINDEX_BUCKET

