#pragma once

#ifndef ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD
#define ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class AlphabeticIndex_Record : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject getData();
		jstring getName();
		jstring toString();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void AlphabeticIndex_Record::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.AlphabeticIndex$Record",
			"(V)V");
	}
	
	// Methods
	jobject AlphabeticIndex_Record::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring AlphabeticIndex_Record::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AlphabeticIndex_Record::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class AlphabeticIndex_Record : public __jni_impl::android::icu::text::AlphabeticIndex_Record
	{
	public:
		AlphabeticIndex_Record(QAndroidJniObject obj) { __thiz = obj; }
		AlphabeticIndex_Record()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_ALPHABETICINDEX_RECORD

