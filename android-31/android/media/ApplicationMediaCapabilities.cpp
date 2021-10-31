#include "../os/Parcel.hpp"
#include "./ApplicationMediaCapabilities.hpp"

namespace android::media
{
	// Fields
	__JniBaseClass ApplicationMediaCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.media.ApplicationMediaCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ApplicationMediaCapabilities::ApplicationMediaCapabilities(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::media::ApplicationMediaCapabilities ApplicationMediaCapabilities::createFromXml(__JniBaseClass arg0)
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
	__JniBaseClass ApplicationMediaCapabilities::getSupportedHdrTypes()
	{
		return callObjectMethod(
			"getSupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ApplicationMediaCapabilities::getSupportedVideoMimeTypes()
	{
		return callObjectMethod(
			"getSupportedVideoMimeTypes",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ApplicationMediaCapabilities::getUnsupportedHdrTypes()
	{
		return callObjectMethod(
			"getUnsupportedHdrTypes",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ApplicationMediaCapabilities::getUnsupportedVideoMimeTypes()
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

