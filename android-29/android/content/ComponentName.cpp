#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "./ComponentName.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject ComponentName::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ComponentName",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ComponentName::ComponentName(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ComponentName::ComponentName(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	ComponentName::ComponentName(android::content::Context arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ComponentName::ComponentName(android::content::Context arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ComponentName::ComponentName(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject ComponentName::createRelative(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ComponentName::createRelative(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ComponentName::readFromParcel(android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ComponentName::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0
		);
	}
	void ComponentName::writeToParcel(android::content::ComponentName arg0, android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ComponentName",
			"writeToParcel",
			"(Landroid/content/ComponentName;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ComponentName::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/content/ComponentName;"
		);
	}
	jint ComponentName::compareTo(android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint ComponentName::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ComponentName::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ComponentName::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ComponentName::flattenToShortString()
	{
		return __thiz.callObjectMethod(
			"flattenToShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getShortClassName()
	{
		return __thiz.callObjectMethod(
			"getShortClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ComponentName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ComponentName::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ComponentName::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

