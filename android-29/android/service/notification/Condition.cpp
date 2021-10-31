#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../net/Uri_Builder.hpp"
#include "../../os/Parcel.hpp"
#include "./Condition.hpp"

namespace android::service::notification
{
	// Fields
	__JniBaseClass Condition::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.Condition",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Condition::FLAG_RELEVANT_ALWAYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_ALWAYS"
		);
	}
	jint Condition::FLAG_RELEVANT_NOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_NOW"
		);
	}
	jstring Condition::SCHEME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.Condition",
			"SCHEME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Condition::STATE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_ERROR"
		);
	}
	jint Condition::STATE_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_FALSE"
		);
	}
	jint Condition::STATE_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_TRUE"
		);
	}
	jint Condition::STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_UNKNOWN"
		);
	}
	jint Condition::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jint Condition::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	android::net::Uri Condition::id()
	{
		return getObjectField(
			"id",
			"Landroid/net/Uri;"
		);
	}
	jstring Condition::line1()
	{
		return getObjectField(
			"line1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Condition::line2()
	{
		return getObjectField(
			"line2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Condition::state()
	{
		return getField<jint>(
			"state"
		);
	}
	jstring Condition::summary()
	{
		return getObjectField(
			"summary",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Condition::Condition(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Condition::Condition(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.service.notification.Condition",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Condition::Condition(android::net::Uri arg0, jstring arg1, jint arg2)
		: __JniBaseClass(
			"android.service.notification.Condition",
			"(Landroid/net/Uri;Ljava/lang/String;I)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	Condition::Condition(android::net::Uri arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4, jint arg5, jint arg6)
		: __JniBaseClass(
			"android.service.notification.Condition",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	jboolean Condition::isValidId(android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.service.notification.Condition",
			"isValidId",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	android::net::Uri_Builder Condition::newId(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"newId",
			"(Landroid/content/Context;)Landroid/net/Uri$Builder;",
			arg0.object()
		);
	}
	jstring Condition::relevanceToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"relevanceToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Condition::stateToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::service::notification::Condition Condition::copy()
	{
		return callObjectMethod(
			"copy",
			"()Landroid/service/notification/Condition;"
		);
	}
	jint Condition::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Condition::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Condition::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Condition::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Condition::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

