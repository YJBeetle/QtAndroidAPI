#pragma once

#ifndef ANDROID_TEXT_BIDIFORMATTER
#define ANDROID_TEXT_BIDIFORMATTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::text
{
	class BidiFormatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(jboolean arg0);
		static QAndroidJniObject getInstance();
		jboolean isRtl(jstring arg0);
		jboolean isRtlContext();
		jboolean getStereoReset();
		jstring unicodeWrap(jstring arg0, jboolean arg1);
		jstring unicodeWrap(jstring arg0);
		jstring unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2);
		jstring unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::text

#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void BidiFormatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BidiFormatter::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/BidiFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BidiFormatter::getInstance(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Z)Landroid/text/BidiFormatter;",
			arg0
		);
	}
	QAndroidJniObject BidiFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"()Landroid/text/BidiFormatter;"
		);
	}
	jboolean BidiFormatter::isRtl(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRtl",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean BidiFormatter::isRtlContext()
	{
		return __thiz.callMethod<jboolean>(
			"isRtlContext",
			"()Z"
		);
	}
	jboolean BidiFormatter::getStereoReset()
	{
		return __thiz.callMethod<jboolean>(
			"getStereoReset",
			"()Z"
		);
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Z)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/String;Landroid/text/TextDirectionHeuristic;Z)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/String;Landroid/text/TextDirectionHeuristic;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class BidiFormatter : public __jni_impl::android::text::BidiFormatter
	{
	public:
		BidiFormatter(QAndroidJniObject obj) { __thiz = obj; }
		BidiFormatter()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_BIDIFORMATTER

