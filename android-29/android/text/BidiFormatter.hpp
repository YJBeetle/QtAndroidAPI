#pragma once

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
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(jboolean arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		jboolean getStereoReset();
		jboolean isRtl(jstring arg0);
		jboolean isRtl(const QString &arg0);
		jboolean isRtlContext();
		jstring unicodeWrap(jstring arg0);
		jstring unicodeWrap(const QString &arg0);
		jstring unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1);
		jstring unicodeWrap(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		jstring unicodeWrap(jstring arg0, jboolean arg1);
		jstring unicodeWrap(const QString &arg0, jboolean arg1);
		jstring unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2);
		jstring unicodeWrap(const QString &arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2);
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
	QAndroidJniObject BidiFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"()Landroid/text/BidiFormatter;"
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
	QAndroidJniObject BidiFormatter::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/BidiFormatter;",
			arg0.__jniObject().object()
		);
	}
	jboolean BidiFormatter::getStereoReset()
	{
		return __thiz.callMethod<jboolean>(
			"getStereoReset",
			"()Z"
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
	jboolean BidiFormatter::isRtl(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRtl",
			"(Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean BidiFormatter::isRtlContext()
	{
		return __thiz.callMethod<jboolean>(
			"isRtlContext",
			"()Z"
		);
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
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
	jstring BidiFormatter::unicodeWrap(const QString &arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Z)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;Z)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(const QString &arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;Z)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
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

