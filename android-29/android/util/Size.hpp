#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class Size : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		static QAndroidJniObject parseSize(jstring arg0);
		static QAndroidJniObject parseSize(const QString &arg0);
		jboolean equals(jobject arg0);
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void Size::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Size",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject Size::parseSize(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Size",
			"parseSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0
		);
	}
	QAndroidJniObject Size::parseSize(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Size",
			"parseSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Size::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Size::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Size::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint Size::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Size::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Size : public __jni_impl::android::util::Size
	{
	public:
		Size(QAndroidJniObject obj) { __thiz = obj; }
		Size(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

