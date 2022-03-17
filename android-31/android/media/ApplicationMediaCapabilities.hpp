#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ApplicationMediaCapabilities.def.hpp"

namespace android::media
{
	// Fields
	inline JObject ApplicationMediaCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.media.ApplicationMediaCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::ApplicationMediaCapabilities ApplicationMediaCapabilities::createFromXml(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.media.ApplicationMediaCapabilities",
			"createFromXml",
			"(Lorg/xmlpull/v1/XmlPullParser;)Landroid/media/ApplicationMediaCapabilities;",
			arg0.object()
		);
	}
	inline jint ApplicationMediaCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject ApplicationMediaCapabilities::getSupportedHdrTypes() const
	{
		return callObjectMethod(
			"getSupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	inline JObject ApplicationMediaCapabilities::getSupportedVideoMimeTypes() const
	{
		return callObjectMethod(
			"getSupportedVideoMimeTypes",
			"()Ljava/util/List;"
		);
	}
	inline JObject ApplicationMediaCapabilities::getUnsupportedHdrTypes() const
	{
		return callObjectMethod(
			"getUnsupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	inline JObject ApplicationMediaCapabilities::getUnsupportedVideoMimeTypes() const
	{
		return callObjectMethod(
			"getUnsupportedVideoMimeTypes",
			"()Ljava/util/List;"
		);
	}
	inline jboolean ApplicationMediaCapabilities::isFormatSpecified(JString arg0) const
	{
		return callMethod<jboolean>(
			"isFormatSpecified",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean ApplicationMediaCapabilities::isHdrTypeSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isHdrTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean ApplicationMediaCapabilities::isVideoMimeTypeSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isVideoMimeTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString ApplicationMediaCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ApplicationMediaCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

