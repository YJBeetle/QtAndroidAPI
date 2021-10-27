#include "../../os/Parcel.hpp"
#include "./PathPermission.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject PathPermission::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PathPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PathPermission::PathPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PathPermission::PathPermission(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PathPermission",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	PathPermission::PathPermission(jstring &arg0, jint &arg1, jstring &arg2, jstring &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PathPermission",
			"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	PathPermission::PathPermission(const QString &arg0, jint &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PathPermission",
			"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	
	// Methods
	jstring PathPermission::getReadPermission()
	{
		return __thiz.callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PathPermission::getWritePermission()
	{
		return __thiz.callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PathPermission::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

