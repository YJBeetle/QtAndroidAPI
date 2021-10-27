#pragma once

#ifndef ANDROID_UTIL_SIZEF
#define ANDROID_UTIL_SIZEF

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class SizeF : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
		static QAndroidJniObject parseSizeF(jstring arg0);
		static QAndroidJniObject parseSizeF(const QString &arg0);
		jboolean equals(jobject arg0);
		jfloat getHeight();
		jfloat getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void SizeF::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.SizeF",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject SizeF::parseSizeF(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
		);
	}
	QAndroidJniObject SizeF::parseSizeF(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean SizeF::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat SizeF::getHeight()
	{
		return __thiz.callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	jfloat SizeF::getWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jint SizeF::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SizeF::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class SizeF : public __jni_impl::android::util::SizeF
	{
	public:
		SizeF(QAndroidJniObject obj) { __thiz = obj; }
		SizeF(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_SIZEF

