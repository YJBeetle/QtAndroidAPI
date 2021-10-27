#include "../../os/Parcel.hpp"
#include "./ProviderInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject ProviderInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ProviderInfo::FLAG_SINGLE_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ProviderInfo",
			"FLAG_SINGLE_USER"
		);
	}
	jstring ProviderInfo::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ProviderInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jboolean ProviderInfo::forceUriPermissions()
	{
		return __thiz.getField<jboolean>(
			"forceUriPermissions"
		);
	}
	jboolean ProviderInfo::grantUriPermissions()
	{
		return __thiz.getField<jboolean>(
			"grantUriPermissions"
		);
	}
	jint ProviderInfo::initOrder()
	{
		return __thiz.getField<jint>(
			"initOrder"
		);
	}
	jboolean ProviderInfo::isSyncable()
	{
		return __thiz.getField<jboolean>(
			"isSyncable"
		);
	}
	jboolean ProviderInfo::multiprocess()
	{
		return __thiz.getField<jboolean>(
			"multiprocess"
		);
	}
	jarray ProviderInfo::pathPermissions()
	{
		return __thiz.getObjectField(
			"pathPermissions",
			"[Landroid/content/pm/PathPermission;"
		).object<jarray>();
	}
	jstring ProviderInfo::readPermission()
	{
		return __thiz.getObjectField(
			"readPermission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ProviderInfo::uriPermissionPatterns()
	{
		return __thiz.getObjectField(
			"uriPermissionPatterns",
			"[Landroid/os/PatternMatcher;"
		).object<jarray>();
	}
	jstring ProviderInfo::writePermission()
	{
		return __thiz.getObjectField(
			"writePermission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ProviderInfo::ProviderInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProviderInfo::ProviderInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ProviderInfo",
			"()V"
		);
	}
	ProviderInfo::ProviderInfo(android::content::pm::ProviderInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ProviderInfo",
			"(Landroid/content/pm/ProviderInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ProviderInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ProviderInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ProviderInfo::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring ProviderInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ProviderInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

