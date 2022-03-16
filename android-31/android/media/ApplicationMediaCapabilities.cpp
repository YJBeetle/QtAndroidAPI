#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ApplicationMediaCapabilities.hpp"

namespace android::media
{
	// Fields
	JObject ApplicationMediaCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.media.ApplicationMediaCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	android::media::ApplicationMediaCapabilities ApplicationMediaCapabilities::createFromXml(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.media.ApplicationMediaCapabilities",
			"createFromXml",
			"(Lorg/xmlpull/v1/XmlPullParser;)Landroid/media/ApplicationMediaCapabilities;",
			arg0.object()
		);
	}
	jint ApplicationMediaCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject ApplicationMediaCapabilities::getSupportedHdrTypes() const
	{
		return callObjectMethod(
			"getSupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	JObject ApplicationMediaCapabilities::getSupportedVideoMimeTypes() const
	{
		return callObjectMethod(
			"getSupportedVideoMimeTypes",
			"()Ljava/util/List;"
		);
	}
	JObject ApplicationMediaCapabilities::getUnsupportedHdrTypes() const
	{
		return callObjectMethod(
			"getUnsupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	JObject ApplicationMediaCapabilities::getUnsupportedVideoMimeTypes() const
	{
		return callObjectMethod(
			"getUnsupportedVideoMimeTypes",
			"()Ljava/util/List;"
		);
	}
	jboolean ApplicationMediaCapabilities::isFormatSpecified(JString arg0) const
	{
		return callMethod<jboolean>(
			"isFormatSpecified",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean ApplicationMediaCapabilities::isHdrTypeSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isHdrTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean ApplicationMediaCapabilities::isVideoMimeTypeSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isVideoMimeTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JString ApplicationMediaCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ApplicationMediaCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

