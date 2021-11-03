#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "../os/PersistableBundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ClipDescription.hpp"

namespace android::content
{
	// Fields
	JObject ClipDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString ClipDescription::MIMETYPE_TEXT_HTML()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_HTML",
			"Ljava/lang/String;"
		);
	}
	JString ClipDescription::MIMETYPE_TEXT_INTENT()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_INTENT",
			"Ljava/lang/String;"
		);
	}
	JString ClipDescription::MIMETYPE_TEXT_PLAIN()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_PLAIN",
			"Ljava/lang/String;"
		);
	}
	JString ClipDescription::MIMETYPE_TEXT_URILIST()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_URILIST",
			"Ljava/lang/String;"
		);
	}
	JString ClipDescription::MIMETYPE_UNKNOWN()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ClipDescription::ClipDescription(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ClipDescription::ClipDescription(android::content::ClipDescription &arg0)
		: JObject(
			"android.content.ClipDescription",
			"(Landroid/content/ClipDescription;)V",
			arg0.object()
		) {}
	ClipDescription::ClipDescription(JString arg0, JArray arg1)
		: JObject(
			"android.content.ClipDescription",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	jboolean ClipDescription::compareMimeTypes(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ClipDescription",
			"compareMimeTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint ClipDescription::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JArray ClipDescription::filterMimeTypes(JString arg0)
	{
		return callObjectMethod(
			"filterMimeTypes",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::os::PersistableBundle ClipDescription::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	JString ClipDescription::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString ClipDescription::getMimeType(jint arg0)
	{
		return callObjectMethod(
			"getMimeType",
			"(I)Ljava/lang/String;",
			arg0
		);
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
	jboolean ClipDescription::hasMimeType(JString arg0)
	{
		return callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
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
	JString ClipDescription::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

