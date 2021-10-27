#include "../content/ComponentName.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../service/notification/ZenPolicy.hpp"
#include "./AutomaticZenRule.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject AutomaticZenRule::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AutomaticZenRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	AutomaticZenRule::AutomaticZenRule(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AutomaticZenRule::AutomaticZenRule(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	AutomaticZenRule::AutomaticZenRule(jstring &arg0, android::content::ComponentName &arg1, android::net::Uri &arg2, jint &arg3, jboolean &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/net/Uri;IZ)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	AutomaticZenRule::AutomaticZenRule(const QString &arg0, android::content::ComponentName &arg1, android::net::Uri &arg2, jint &arg3, jboolean &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/net/Uri;IZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	AutomaticZenRule::AutomaticZenRule(jstring &arg0, android::content::ComponentName &arg1, android::content::ComponentName &arg2, android::net::Uri &arg3, android::service::notification::ZenPolicy &arg4, jint &arg5, jboolean &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/net/Uri;Landroid/service/notification/ZenPolicy;IZ)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6
		);
	}
	AutomaticZenRule::AutomaticZenRule(const QString &arg0, android::content::ComponentName &arg1, android::content::ComponentName &arg2, android::net::Uri &arg3, android::service::notification::ZenPolicy &arg4, jint &arg5, jboolean &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/net/Uri;Landroid/service/notification/ZenPolicy;IZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6
		);
	}
	
	// Methods
	jint AutomaticZenRule::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutomaticZenRule::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AutomaticZenRule::getConditionId()
	{
		return __thiz.callObjectMethod(
			"getConditionId",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject AutomaticZenRule::getConfigurationActivity()
	{
		return __thiz.callObjectMethod(
			"getConfigurationActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	jlong AutomaticZenRule::getCreationTime()
	{
		return __thiz.callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	jint AutomaticZenRule::getInterruptionFilter()
	{
		return __thiz.callMethod<jint>(
			"getInterruptionFilter",
			"()I"
		);
	}
	jstring AutomaticZenRule::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AutomaticZenRule::getOwner()
	{
		return __thiz.callObjectMethod(
			"getOwner",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject AutomaticZenRule::getZenPolicy()
	{
		return __thiz.callObjectMethod(
			"getZenPolicy",
			"()Landroid/service/notification/ZenPolicy;"
		);
	}
	jint AutomaticZenRule::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AutomaticZenRule::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void AutomaticZenRule::setConditionId(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setConditionId",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void AutomaticZenRule::setConfigurationActivity(android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"setConfigurationActivity",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void AutomaticZenRule::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AutomaticZenRule::setInterruptionFilter(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	void AutomaticZenRule::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AutomaticZenRule::setName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AutomaticZenRule::setZenPolicy(android::service::notification::ZenPolicy arg0)
	{
		__thiz.callMethod<void>(
			"setZenPolicy",
			"(Landroid/service/notification/ZenPolicy;)V",
			arg0.__jniObject().object()
		);
	}
	jstring AutomaticZenRule::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AutomaticZenRule::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

