#include "../content/Intent.hpp"
#include "../content/res/Resources.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PreferenceActivity_Header.hpp"

namespace android::preference
{
	// Fields
	JObject PreferenceActivity_Header::CREATOR()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity$Header",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString PreferenceActivity_Header::breadCrumbShortTitle()
	{
		return getObjectField(
			"breadCrumbShortTitle",
			"Ljava/lang/CharSequence;"
		);
	}
	jint PreferenceActivity_Header::breadCrumbShortTitleRes()
	{
		return getField<jint>(
			"breadCrumbShortTitleRes"
		);
	}
	JString PreferenceActivity_Header::breadCrumbTitle()
	{
		return getObjectField(
			"breadCrumbTitle",
			"Ljava/lang/CharSequence;"
		);
	}
	jint PreferenceActivity_Header::breadCrumbTitleRes()
	{
		return getField<jint>(
			"breadCrumbTitleRes"
		);
	}
	android::os::Bundle PreferenceActivity_Header::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	JString PreferenceActivity_Header::fragment()
	{
		return getObjectField(
			"fragment",
			"Ljava/lang/String;"
		);
	}
	android::os::Bundle PreferenceActivity_Header::fragmentArguments()
	{
		return getObjectField(
			"fragmentArguments",
			"Landroid/os/Bundle;"
		);
	}
	jint PreferenceActivity_Header::iconRes()
	{
		return getField<jint>(
			"iconRes"
		);
	}
	jlong PreferenceActivity_Header::id()
	{
		return getField<jlong>(
			"id"
		);
	}
	android::content::Intent PreferenceActivity_Header::intent()
	{
		return getObjectField(
			"intent",
			"Landroid/content/Intent;"
		);
	}
	JString PreferenceActivity_Header::summary()
	{
		return getObjectField(
			"summary",
			"Ljava/lang/CharSequence;"
		);
	}
	jint PreferenceActivity_Header::summaryRes()
	{
		return getField<jint>(
			"summaryRes"
		);
	}
	JString PreferenceActivity_Header::title()
	{
		return getObjectField(
			"title",
			"Ljava/lang/CharSequence;"
		);
	}
	jint PreferenceActivity_Header::titleRes()
	{
		return getField<jint>(
			"titleRes"
		);
	}
	
	// QAndroidJniObject forward
	PreferenceActivity_Header::PreferenceActivity_Header(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PreferenceActivity_Header::PreferenceActivity_Header()
		: JObject(
			"android.preference.PreferenceActivity$Header",
			"()V"
		) {}
	
	// Methods
	jint PreferenceActivity_Header::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString PreferenceActivity_Header::getBreadCrumbShortTitle(android::content::res::Resources arg0)
	{
		return callObjectMethod(
			"getBreadCrumbShortTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString PreferenceActivity_Header::getBreadCrumbTitle(android::content::res::Resources arg0)
	{
		return callObjectMethod(
			"getBreadCrumbTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString PreferenceActivity_Header::getSummary(android::content::res::Resources arg0)
	{
		return callObjectMethod(
			"getSummary",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString PreferenceActivity_Header::getTitle(android::content::res::Resources arg0)
	{
		return callObjectMethod(
			"getTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	void PreferenceActivity_Header::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void PreferenceActivity_Header::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::preference

