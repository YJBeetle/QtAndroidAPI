#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./StatusHints.hpp"

namespace android::telecom
{
	// Fields
	QAndroidJniObject StatusHints::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.StatusHints",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	StatusHints::StatusHints(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StatusHints::StatusHints(jstring &arg0, android::graphics::drawable::Icon &arg1, android::os::Bundle &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.StatusHints",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	StatusHints::StatusHints(const QString &arg0, android::graphics::drawable::Icon &arg1, android::os::Bundle &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.StatusHints",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint StatusHints::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean StatusHints::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject StatusHints::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject StatusHints::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring StatusHints::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint StatusHints::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void StatusHints::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom

