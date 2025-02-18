#pragma once

#include "../content/Intent.def.hpp"
#include "../content/res/Resources.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PreferenceActivity_Header.def.hpp"

namespace android::preference
{
	// Fields
	inline JObject PreferenceActivity_Header::CREATOR()
	{
		return getStaticObjectField(
			"android.preference.PreferenceActivity$Header",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString PreferenceActivity_Header::breadCrumbShortTitle()
	{
		return getObjectField(
			"breadCrumbShortTitle",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint PreferenceActivity_Header::breadCrumbShortTitleRes()
	{
		return getField<jint>(
			"breadCrumbShortTitleRes"
		);
	}
	inline JString PreferenceActivity_Header::breadCrumbTitle()
	{
		return getObjectField(
			"breadCrumbTitle",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint PreferenceActivity_Header::breadCrumbTitleRes()
	{
		return getField<jint>(
			"breadCrumbTitleRes"
		);
	}
	inline android::os::Bundle PreferenceActivity_Header::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	inline JString PreferenceActivity_Header::fragment()
	{
		return getObjectField(
			"fragment",
			"Ljava/lang/String;"
		);
	}
	inline android::os::Bundle PreferenceActivity_Header::fragmentArguments()
	{
		return getObjectField(
			"fragmentArguments",
			"Landroid/os/Bundle;"
		);
	}
	inline jint PreferenceActivity_Header::iconRes()
	{
		return getField<jint>(
			"iconRes"
		);
	}
	inline jlong PreferenceActivity_Header::id()
	{
		return getField<jlong>(
			"id"
		);
	}
	inline android::content::Intent PreferenceActivity_Header::intent()
	{
		return getObjectField(
			"intent",
			"Landroid/content/Intent;"
		);
	}
	inline JString PreferenceActivity_Header::summary()
	{
		return getObjectField(
			"summary",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint PreferenceActivity_Header::summaryRes()
	{
		return getField<jint>(
			"summaryRes"
		);
	}
	inline JString PreferenceActivity_Header::title()
	{
		return getObjectField(
			"title",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint PreferenceActivity_Header::titleRes()
	{
		return getField<jint>(
			"titleRes"
		);
	}
	
	// Constructors
	inline PreferenceActivity_Header::PreferenceActivity_Header()
		: JObject(
			"android.preference.PreferenceActivity$Header",
			"()V"
		) {}
	
	// Methods
	inline jint PreferenceActivity_Header::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PreferenceActivity_Header::getBreadCrumbShortTitle(android::content::res::Resources arg0) const
	{
		return callObjectMethod(
			"getBreadCrumbShortTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString PreferenceActivity_Header::getBreadCrumbTitle(android::content::res::Resources arg0) const
	{
		return callObjectMethod(
			"getBreadCrumbTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString PreferenceActivity_Header::getSummary(android::content::res::Resources arg0) const
	{
		return callObjectMethod(
			"getSummary",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString PreferenceActivity_Header::getTitle(android::content::res::Resources arg0) const
	{
		return callObjectMethod(
			"getTitle",
			"(Landroid/content/res/Resources;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline void PreferenceActivity_Header::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void PreferenceActivity_Header::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::preference

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif
