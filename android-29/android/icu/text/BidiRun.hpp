#pragma once

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
		jbyte getDirection();
		jbyte getEmbeddingLevel();
		jint getLength();
		jint getLimit();
		jint getStart();
		jboolean isEvenRun();
		jboolean isOddRun();
		jstring toString();
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
	jbyte BidiRun::getDirection()
	{
		return __thiz.callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	jbyte BidiRun::getEmbeddingLevel()
	{
		return __thiz.callMethod<jbyte>(
			"getEmbeddingLevel",
			"()B"
		);
	}
	jint BidiRun::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint BidiRun::getLimit()
	{
		return __thiz.callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	jint BidiRun::getStart()
	{
		return __thiz.callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jboolean BidiRun::isEvenRun()
	{
		return __thiz.callMethod<jboolean>(
			"isEvenRun",
			"()Z"
		);
	}
	jboolean BidiRun::isOddRun()
	{
		return __thiz.callMethod<jboolean>(
			"isOddRun",
			"()Z"
		);
	}
	jstring BidiRun::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

