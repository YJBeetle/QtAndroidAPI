#pragma once

#include "./Parcel.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PersistableBundle.def.hpp"

namespace android::os
{
	// Fields
	inline JObject PersistableBundle::CREATOR()
	{
		return getStaticObjectField(
			"android.os.PersistableBundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::os::PersistableBundle PersistableBundle::EMPTY()
	{
		return getStaticObjectField(
			"android.os.PersistableBundle",
			"EMPTY",
			"Landroid/os/PersistableBundle;"
		);
	}
	
	// Constructors
	inline PersistableBundle::PersistableBundle()
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"()V"
		) {}
	inline PersistableBundle::PersistableBundle(android::os::PersistableBundle &arg0)
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		) {}
	inline PersistableBundle::PersistableBundle(jint arg0)
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::os::PersistableBundle PersistableBundle::readFromStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.os.PersistableBundle",
			"readFromStream",
			"(Ljava/io/InputStream;)Landroid/os/PersistableBundle;",
			arg0.object()
		);
	}
	inline JObject PersistableBundle::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::os::PersistableBundle PersistableBundle::deepCopy() const
	{
		return callObjectMethod(
			"deepCopy",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint PersistableBundle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::PersistableBundle PersistableBundle::getPersistableBundle(JString arg0) const
	{
		return callObjectMethod(
			"getPersistableBundle",
			"(Ljava/lang/String;)Landroid/os/PersistableBundle;",
			arg0.object<jstring>()
		);
	}
	inline void PersistableBundle::putPersistableBundle(JString arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"putPersistableBundle",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString PersistableBundle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PersistableBundle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void PersistableBundle::writeToStream(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"writeToStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace android::os

// Base class headers
#include "./BaseBundle.hpp"

