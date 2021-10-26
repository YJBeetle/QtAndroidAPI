#pragma once

#ifndef ANDROID_ICU_TEXT_NORMALIZER2
#define ANDROID_ICU_TEXT_NORMALIZER2

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::icu::text
{
	class Normalizer2_Mode;
}
namespace __jni_impl::android::icu::text
{
	class Normalizer_QuickCheckResult;
}

namespace __jni_impl::android::icu::text
{
	class Normalizer2 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject append(__jni_impl::java::lang::StringBuilder arg0, jstring arg1);
		QAndroidJniObject append(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::io::InputStream arg0, jstring arg1, __jni_impl::android::icu::text::Normalizer2_Mode arg2);
		static QAndroidJniObject getInstance(__jni_impl::java::io::InputStream arg0, const QString &arg1, __jni_impl::android::icu::text::Normalizer2_Mode arg2);
		QAndroidJniObject normalize(jstring arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject normalize(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject normalize(jstring arg0, __jni_impl::java::lang::StringBuilder arg1);
		QAndroidJniObject normalize(const QString &arg0, __jni_impl::java::lang::StringBuilder arg1);
		jstring normalize(jstring arg0);
		jstring normalize(const QString &arg0);
		jint getCombiningClass(jint arg0);
		jboolean isNormalized(jstring arg0);
		jboolean isNormalized(const QString &arg0);
		jstring getDecomposition(jint arg0);
		static QAndroidJniObject getNFCInstance();
		static QAndroidJniObject getNFDInstance();
		static QAndroidJniObject getNFKCInstance();
		static QAndroidJniObject getNFKDInstance();
		static QAndroidJniObject getNFKCCasefoldInstance();
		QAndroidJniObject normalizeSecondAndAppend(__jni_impl::java::lang::StringBuilder arg0, jstring arg1);
		QAndroidJniObject normalizeSecondAndAppend(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1);
		jstring getRawDecomposition(jint arg0);
		jint composePair(jint arg0, jint arg1);
		QAndroidJniObject quickCheck(jstring arg0);
		QAndroidJniObject quickCheck(const QString &arg0);
		jint spanQuickCheckYes(jstring arg0);
		jint spanQuickCheckYes(const QString &arg0);
		jboolean hasBoundaryBefore(jint arg0);
		jboolean hasBoundaryAfter(jint arg0);
		jboolean isInert(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/lang/StringBuilder.hpp"
#include "../../../java/io/InputStream.hpp"
#include "Normalizer2_Mode.hpp"
#include "Normalizer_QuickCheckResult.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void Normalizer2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Normalizer2",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Normalizer2::append(__jni_impl::java::lang::StringBuilder arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Normalizer2::append(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Normalizer2::getInstance(__jni_impl::java::io::InputStream arg0, jstring arg1, __jni_impl::android::icu::text::Normalizer2_Mode arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getInstance",
			"(Ljava/io/InputStream;Ljava/lang/String;Landroid/icu/text/Normalizer2$Mode;)Landroid/icu/text/Normalizer2;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Normalizer2::getInstance(__jni_impl::java::io::InputStream arg0, const QString &arg1, __jni_impl::android::icu::text::Normalizer2_Mode arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getInstance",
			"(Ljava/io/InputStream;Ljava/lang/String;Landroid/icu/text/Normalizer2$Mode;)Landroid/icu/text/Normalizer2;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Normalizer2::normalize(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Normalizer2::normalize(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Normalizer2::normalize(jstring arg0, __jni_impl::java::lang::StringBuilder arg1)
	{
		return __thiz.callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Normalizer2::normalize(const QString &arg0, __jni_impl::java::lang::StringBuilder arg1)
	{
		return __thiz.callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring Normalizer2::normalize(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Normalizer2::normalize(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint Normalizer2::getCombiningClass(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getCombiningClass",
			"(I)I",
			arg0
		);
	}
	jboolean Normalizer2::isNormalized(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNormalized",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean Normalizer2::isNormalized(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNormalized",
			"(Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Normalizer2::getDecomposition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDecomposition",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Normalizer2::getNFCInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFCInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	QAndroidJniObject Normalizer2::getNFDInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFDInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	QAndroidJniObject Normalizer2::getNFKCInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKCInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	QAndroidJniObject Normalizer2::getNFKDInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKDInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	QAndroidJniObject Normalizer2::getNFKCCasefoldInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKCCasefoldInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	QAndroidJniObject Normalizer2::normalizeSecondAndAppend(__jni_impl::java::lang::StringBuilder arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"normalizeSecondAndAppend",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Normalizer2::normalizeSecondAndAppend(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"normalizeSecondAndAppend",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring Normalizer2::getRawDecomposition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRawDecomposition",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Normalizer2::composePair(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"composePair",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Normalizer2::quickCheck(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"quickCheck",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;",
			arg0
		);
	}
	QAndroidJniObject Normalizer2::quickCheck(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"quickCheck",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Normalizer2::spanQuickCheckYes(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"spanQuickCheckYes",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint Normalizer2::spanQuickCheckYes(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"spanQuickCheckYes",
			"(Ljava/lang/CharSequence;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Normalizer2::hasBoundaryBefore(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasBoundaryBefore",
			"(I)Z",
			arg0
		);
	}
	jboolean Normalizer2::hasBoundaryAfter(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasBoundaryAfter",
			"(I)Z",
			arg0
		);
	}
	jboolean Normalizer2::isInert(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isInert",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Normalizer2 : public __jni_impl::android::icu::text::Normalizer2
	{
	public:
		Normalizer2(QAndroidJniObject obj) { __thiz = obj; }
		Normalizer2()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_NORMALIZER2

