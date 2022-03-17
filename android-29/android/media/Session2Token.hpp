#pragma once

#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Session2Token.def.hpp"

namespace android::media
{
	// Fields
	inline JObject Session2Token::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Session2Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Session2Token::TYPE_SESSION()
	{
		return getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION"
		);
	}
	inline jint Session2Token::TYPE_SESSION_SERVICE()
	{
		return getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION_SERVICE"
		);
	}
	
	// Constructors
	inline Session2Token::Session2Token(android::content::Context arg0, android::content::ComponentName arg1)
		: JObject(
			"android.media.Session2Token",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint Session2Token::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Session2Token::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::Bundle Session2Token::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString Session2Token::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Session2Token::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Session2Token::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint Session2Token::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	inline jint Session2Token::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Session2Token::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Session2Token::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
