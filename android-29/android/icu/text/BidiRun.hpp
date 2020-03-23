#pragma once

#ifndef ANDROID_ICU_TEXT_BIDIRUN
#define ANDROID_ICU_TEXT_BIDIRUN

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class BidiRun : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint getLength();
		jint getStart();
		jbyte getDirection();
		jint getLimit();
		jbyte getEmbeddingLevel();
		jboolean isOddRun();
		jboolean isEvenRun();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void BidiRun::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.BidiRun",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BidiRun::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint BidiRun::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I");
	}
	jint BidiRun::getStart()
	{
		return __thiz.callMethod<jint>(
			"getStart",
			"()I");
	}
	jbyte BidiRun::getDirection()
	{
		return __thiz.callMethod<jbyte>(
			"getDirection",
			"()B");
	}
	jint BidiRun::getLimit()
	{
		return __thiz.callMethod<jint>(
			"getLimit",
			"()I");
	}
	jbyte BidiRun::getEmbeddingLevel()
	{
		return __thiz.callMethod<jbyte>(
			"getEmbeddingLevel",
			"()B");
	}
	jboolean BidiRun::isOddRun()
	{
		return __thiz.callMethod<jboolean>(
			"isOddRun",
			"()Z");
	}
	jboolean BidiRun::isEvenRun()
	{
		return __thiz.callMethod<jboolean>(
			"isEvenRun",
			"()Z");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class BidiRun : public __jni_impl::android::icu::text::BidiRun
	{
	public:
		BidiRun(QAndroidJniObject obj) { __thiz = obj; }
		BidiRun()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_BIDIRUN

