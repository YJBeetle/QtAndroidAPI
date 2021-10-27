#pragma once

#ifndef ANDROID_UTIL_PROPERTY
#define ANDROID_UTIL_PROPERTY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class Property : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jclass arg0, jstring arg1);
		void __constructor(jclass arg0, const QString &arg1);
		
		// Methods
		static QAndroidJniObject of(jclass arg0, jclass arg1, jstring arg2);
		static QAndroidJniObject of(jclass arg0, jclass arg1, const QString &arg2);
		jobject get(jobject arg0);
		jstring getName();
		jclass getType();
		jboolean isReadOnly();
		void set(jobject arg0, jobject arg1);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void Property::__constructor(jclass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Property",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Property::__constructor(jclass arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Property",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject Property::of(jclass arg0, jclass arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Property",
			"of",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Landroid/util/Property;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Property::of(jclass arg0, jclass arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Property",
			"of",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Landroid/util/Property;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jobject Property::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Property::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass Property::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jboolean Property::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void Property::set(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Property : public __jni_impl::android::util::Property
	{
	public:
		Property(QAndroidJniObject obj) { __thiz = obj; }
		Property(jclass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_PROPERTY

