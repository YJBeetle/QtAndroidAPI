#include "../content/Context.hpp"
#include "../../java/util/Locale.hpp"
#include "./Geocoder.hpp"

namespace android::location
{
	// Fields
	
	Geocoder::Geocoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Geocoder::Geocoder(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Geocoder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Geocoder::Geocoder(android::content::Context &arg0, java::util::Locale &arg1)
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
} // namespace android::location

