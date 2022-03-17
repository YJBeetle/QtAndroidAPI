#pragma once

#include "../../graphics/Bitmap.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_SessionParams.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageInstaller_SessionParams::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PackageInstaller_SessionParams::MODE_FULL_INSTALL()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_FULL_INSTALL"
		);
	}
	inline jint PackageInstaller_SessionParams::MODE_INHERIT_EXISTING()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_INHERIT_EXISTING"
		);
	}
	
	// Constructors
	inline PackageInstaller_SessionParams::PackageInstaller_SessionParams(jint arg0)
		: JObject(
			"android.content.pm.PackageInstaller$SessionParams",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint PackageInstaller_SessionParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void PackageInstaller_SessionParams::setAppIcon(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setAppIcon",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	inline void PackageInstaller_SessionParams::setAppLabel(JString arg0) const
	{
		callMethod<void>(
			"setAppLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void PackageInstaller_SessionParams::setAppPackageName(JString arg0) const
	{
		callMethod<void>(
			"setAppPackageName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PackageInstaller_SessionParams::setInstallLocation(jint arg0) const
	{
		callMethod<void>(
			"setInstallLocation",
			"(I)V",
			arg0
		);
	}
	inline void PackageInstaller_SessionParams::setInstallReason(jint arg0) const
	{
		callMethod<void>(
			"setInstallReason",
			"(I)V",
			arg0
		);
	}
	inline void PackageInstaller_SessionParams::setOriginatingUid(jint arg0) const
	{
		callMethod<void>(
			"setOriginatingUid",
			"(I)V",
			arg0
		);
	}
	inline void PackageInstaller_SessionParams::setOriginatingUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setOriginatingUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void PackageInstaller_SessionParams::setReferrerUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setReferrerUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void PackageInstaller_SessionParams::setSize(jlong arg0) const
	{
		callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	inline void PackageInstaller_SessionParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
