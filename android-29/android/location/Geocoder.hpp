#pragma once

#ifndef ANDROID_LOCATION_GEOCODER
#define ANDROID_LOCATION_GEOCODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::location
{
	class Geocoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::java::util::Locale arg1);
		
		// Methods
		static jboolean isPresent();
		QAndroidJniObject getFromLocation(jdouble arg0, jdouble arg1, jint arg2);
		QAndroidJniObject getFromLocationName(jstring arg0, jint arg1);
		QAndroidJniObject getFromLocationName(const QString &arg0, jint arg1);
		QAndroidJniObject getFromLocationName(jstring arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5);
		QAndroidJniObject getFromLocationName(const QString &arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5);
	};
} // namespace __jni_impl::android::location

#include "../content/Context.hpp"
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::location
{
	// Fields
	
	// Constructors
	void Geocoder::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Geocoder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void Geocoder::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.location.Geocoder",
			"(Landroid/content/Context;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Geocoder::isPresent()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.location.Geocoder",
			"isPresent",
			"()Z"
		);
	}
	QAndroidJniObject Geocoder::getFromLocation(jdouble arg0, jdouble arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"getFromLocation",
			"(DDI)Ljava/util/List;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Geocoder::getFromLocationName(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;I)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Geocoder::getFromLocationName(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;I)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Geocoder::getFromLocationName(jstring arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5)
	{
		return __thiz.callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;IDDDD)Ljava/util/List;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject Geocoder::getFromLocationName(const QString &arg0, jint arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5)
	{
		return __thiz.callObjectMethod(
			"getFromLocationName",
			"(Ljava/lang/String;IDDDD)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class Geocoder : public __jni_impl::android::location::Geocoder
	{
	public:
		Geocoder(QAndroidJniObject obj) { __thiz = obj; }
		Geocoder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		Geocoder(__jni_impl::android::content::Context arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_GEOCODER

