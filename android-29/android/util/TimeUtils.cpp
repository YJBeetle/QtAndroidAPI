#include "../../java/util/TimeZone.hpp"
#include "./TimeUtils.hpp"

namespace android::util
{
	// Fields
	
	TimeUtils::TimeUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
			arg3
		);
	}
	QAndroidJniObject TimeUtils::getTimeZone(jint arg0, jboolean arg1, jlong arg2, const QString &arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZone",
			"(IZJLjava/lang/String;)Ljava/util/TimeZone;",
			arg0,
			arg1,
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	jstring TimeUtils::getTimeZoneDatabaseVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneDatabaseVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TimeUtils::getTimeZoneIdsForCountryCode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneIdsForCountryCode",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject TimeUtils::getTimeZoneIdsForCountryCode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TimeUtils",
			"getTimeZoneIdsForCountryCode",
			"(Ljava/lang/String;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::util

