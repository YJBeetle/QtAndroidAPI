#include "../os/Parcel.hpp"
#include "../os/PersistableBundle.hpp"
#include "./ClipDescription.hpp"

namespace android::content
{
	// Fields
	__JniBaseClass ClipDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ClipDescription::MIMETYPE_TEXT_HTML()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_HTML",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ClipDescription::MIMETYPE_TEXT_INTENT()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ClipDescription::MIMETYPE_TEXT_PLAIN()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_PLAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ClipDescription::MIMETYPE_TEXT_URILIST()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_URILIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ClipDescription::ClipDescription(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ClipDescription::ClipDescription(android::content::ClipDescription &arg0)
		: __JniBaseClass(
			"android.content.ClipDescription",
			"(Landroid/content/ClipDescription;)V",
			arg0.object()
		) {}
	ClipDescription::ClipDescription(jstring arg0, jarray arg1)
		: __JniBaseClass(
			"android.content.ClipDescription",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean ClipDescription::compareMimeTypes(jstring arg0, jstring arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ClipDescription",
			"compareMimeTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jint ClipDescription::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jarray ClipDescription::filterMimeTypes(jstring arg0)
	{
		return callObjectMethod(
			"filterMimeTypes",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	android::os::PersistableBundle ClipDescription::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jstring ClipDescription::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ClipDescription::getMimeType(jint arg0)
	{
		return callObjectMethod(
			"getMimeType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint ClipDescription::getMimeTypeCount()
	{
		return callMethod<jint>(
			"getMimeTypeCount",
			"()I"
		);
	}
	jlong ClipDescription::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jboolean ClipDescription::hasMimeType(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void ClipDescription::setExtras(android::os::PersistableBundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
	jstring ClipDescription::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ClipDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

