#pragma once

#ifndef ANDROID_ICU_TEXT_ALPHABETICINDEX_IMMUTABLEINDEX
#define ANDROID_ICU_TEXT_ALPHABETICINDEX_IMMUTABLEINDEX

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex_Bucket;
}

namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex_ImmutableIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject iterator();
		jint getBucketCount();
		jint getBucketIndex(jstring arg0);
		QAndroidJniObject getBucket(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "AlphabeticIndex_Bucket.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void AlphabeticIndex_ImmutableIndex::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex$ImmutableIndex",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AlphabeticIndex_ImmutableIndex::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
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
	QAndroidJniObject AlphabeticIndex_ImmutableIndex::getBucket(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBucket",
			"(I)Landroid/icu/text/AlphabeticIndex$Bucket;",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class AlphabeticIndex_ImmutableIndex : public __jni_impl::android::icu::text::AlphabeticIndex_ImmutableIndex
	{
	public:
		AlphabeticIndex_ImmutableIndex(QAndroidJniObject obj) { __thiz = obj; }
		AlphabeticIndex_ImmutableIndex()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_ALPHABETICINDEX_IMMUTABLEINDEX

