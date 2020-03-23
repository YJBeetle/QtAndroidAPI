#pragma once

#ifndef ANDROID_UTIL_TIMEUTILS
#define ANDROID_UTIL_TIMEUTILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class TimeZone;
}

namespace __jni_impl::android::util
{
	class TimeUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getTimeZone(jint arg0, jboolean arg1, jlong arg2, jstring arg3);
		static QAndroidJniObject getTimeZoneIdsForCountryCode(jstring arg0);
		static QAndroidJniObject getTimeZoneDatabaseVersion();
	};
} // namespace __jni_impl::android::util

#include "../../java/util/TimeZone.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void TimeUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.TimeUtils",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TimeUtils::getTimeZone(jint arg0, jboolean arg1, jlong arg2, jstring arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZone",
			"(IZJLjava/lang/String;)Ljava/util/TimeZone;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject TimeUtils::getTimeZoneIdsForCountryCode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneIdsForCountryCode",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0);
	}
	QAndroidJniObject TimeUtils::getTimeZoneDatabaseVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneDatabaseVersion",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class TimeUtils : public __jni_impl::android::util::TimeUtils
	{
	public:
		TimeUtils(QAndroidJniObject obj) { __thiz = obj; }
		TimeUtils()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_TIMEUTILS

