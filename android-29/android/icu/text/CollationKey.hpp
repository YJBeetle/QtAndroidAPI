#pragma once

#ifndef ANDROID_ICU_TEXT_COLLATIONKEY
#define ANDROID_ICU_TEXT_COLLATIONKEY

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class CollationKey : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jbyteArray arg1);
		void __constructor(const QString &arg0, jbyteArray arg1);
		
		// Methods
		jboolean equals(__jni_impl::android::icu::text::CollationKey arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::android::icu::text::CollationKey arg0);
		QAndroidJniObject merge(__jni_impl::android::icu::text::CollationKey arg0);
		jbyteArray toByteArray();
		jstring getSourceString();
		QAndroidJniObject getBound(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CollationKey::__constructor(jstring arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CollationKey",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void CollationKey::__constructor(const QString &arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CollationKey",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jboolean CollationKey::equals(__jni_impl::android::icu::text::CollationKey arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/CollationKey;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CollationKey::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CollationKey::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CollationKey::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint CollationKey::compareTo(__jni_impl::android::icu::text::CollationKey arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/CollationKey;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CollationKey::merge(__jni_impl::android::icu::text::CollationKey arg0)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Landroid/icu/text/CollationKey;)Landroid/icu/text/CollationKey;",
			arg0.__jniObject().object()
		);
	}
	jbyteArray CollationKey::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring CollationKey::getSourceString()
	{
		return __thiz.callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CollationKey::getBound(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getBound",
			"(II)Landroid/icu/text/CollationKey;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CollationKey : public __jni_impl::android::icu::text::CollationKey
	{
	public:
		CollationKey(QAndroidJniObject obj) { __thiz = obj; }
		CollationKey(jstring arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_COLLATIONKEY

