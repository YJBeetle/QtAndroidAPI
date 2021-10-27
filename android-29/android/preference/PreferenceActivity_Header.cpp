#include "../content/Intent.hpp"
#include "../content/res/Resources.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./PreferenceActivity_Header.hpp"

namespace android::preference
{
	// Fields
	QAndroidJniObject PreferenceActivity_Header::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.PreferenceActivity$Header",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring PreferenceActivity_Header::breadCrumbShortTitle()
	{
		return __thiz.getObjectField(
			"breadCrumbShortTitle",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint PreferenceActivity_Header::breadCrumbShortTitleRes()
	{
		return __thiz.getField<jint>(
			"breadCrumbShortTitleRes"
		);
	}
	jstring PreferenceActivity_Header::breadCrumbTitle()
	{
		return __thiz.getObjectField(
			"breadCrumbTitle",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint PreferenceActivity_Header::breadCrumbTitleRes()
	{
		return __thiz.getField<jint>(
			"breadCrumbTitleRes"
		);
	}
	QAndroidJniObject PreferenceActivity_Header::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jstring PreferenceActivity_Header::fragment()
	{
		return __thiz.getObjectField(
			"fragment",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PreferenceActivity_Header::fragmentArguments()
	{
		return __thiz.getObjectField(
			"fragmentArguments",
			"Landroid/os/Bundle;"
		);
	}
	jint PreferenceActivity_Header::iconRes()
	{
		return __thiz.getField<jint>(
			"iconRes"
		);
	}
	jlong PreferenceActivity_Header::id()
	{
		return __thiz.getField<jlong>(
			"id"
		);
	}
	QAndroidJniObject PreferenceActivity_Header::intent()
	{
		return __thiz.getObjectField(
			"intent",
			"Landroid/content/Intent;"
		);
	}
	jstring PreferenceActivity_Header::summary()
	{
		return __thiz.getObjectField(
			"summary",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint PreferenceActivity_Header::summaryRes()
	{
		return __thiz.getField<jint>(
			"summaryRes"
		);
	}
	jstring PreferenceActivity_Header::title()
	{
		return __thiz.getObjectField(
			"title",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint PreferenceActivity_Header::titleRes()
	{
		return __thiz.getField<jint>(
			"titleRes"
		);
	}
	
	PreferenceActivity_Header::PreferenceActivity_Header(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PreferenceActivity_Header::PreferenceActivity_Header()
	{
		__thiz = QAndroidJniObject(
			"android.preference.PreferenceActivity$Header",
			"()V"
		);
	}
	
	// Methods
	jint PreferenceActivity_Header::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PreferenceActivity_Header::getBreadCrumbShortTitle(android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getBreadCrumbShortTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring PreferenceActivity_Header::getBreadCrumbTitle(android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getBreadCrumbTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring PreferenceActivity_Header::getSummary(android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getSummary",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring PreferenceActivity_Header::getTitle(android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void PreferenceActivity_Header::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceActivity_Header::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::preference

