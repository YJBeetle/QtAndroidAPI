#include "../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	ApplicationMediaCapabilities::ApplicationMediaCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint ApplicationMediaCapabilities::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject ApplicationMediaCapabilities::getSupportedHdrTypes()
	{
		return callObjectMethod(
			"getSupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	JObject ApplicationMediaCapabilities::getSupportedVideoMimeTypes()
	{
		return callObjectMethod(
			"getSupportedVideoMimeTypes",
			"()Ljava/util/List;"
		);
	}
	JObject ApplicationMediaCapabilities::getUnsupportedHdrTypes()
	{
		return callObjectMethod(
			"getUnsupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	JObject ApplicationMediaCapabilities::getUnsupportedVideoMimeTypes()
	{
		return callObjectMethod(
			"getUnsupportedVideoMimeTypes",
			"()Ljava/util/List;"
		);
	}
	jboolean ApplicationMediaCapabilities::isFormatSpecified(jstring arg0)
	{
		return callMethod<jboolean>(
			"isFormatSpecified",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ApplicationMediaCapabilities::isHdrTypeSupported(jstring arg0)
	{
		return callMethod<jboolean>(
			"isHdrTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ApplicationMediaCapabilities::isVideoMimeTypeSupported(jstring arg0)
	{
		return callMethod<jboolean>(
			"isVideoMimeTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring ApplicationMediaCapabilities::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ApplicationMediaCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

