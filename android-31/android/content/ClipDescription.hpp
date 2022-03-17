#pragma once

#include "../../JArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ClipDescription.def.hpp"

namespace android::content
{
	// Fields
	inline jint ClipDescription::CLASSIFICATION_COMPLETE()
	{
		return getStaticField<jint>(
			"android.content.ClipDescription",
			"CLASSIFICATION_COMPLETE"
		);
	}
	inline jint ClipDescription::CLASSIFICATION_NOT_COMPLETE()
	{
		return getStaticField<jint>(
			"android.content.ClipDescription",
			"CLASSIFICATION_NOT_COMPLETE"
		);
	}
	inline jint ClipDescription::CLASSIFICATION_NOT_PERFORMED()
	{
		return getStaticField<jint>(
			"android.content.ClipDescription",
			"CLASSIFICATION_NOT_PERFORMED"
		);
	}
	inline JObject ClipDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ClipDescription::MIMETYPE_TEXT_HTML()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_HTML",
			"Ljava/lang/String;"
		);
	}
	inline JString ClipDescription::MIMETYPE_TEXT_INTENT()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString ClipDescription::MIMETYPE_TEXT_PLAIN()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_PLAIN",
			"Ljava/lang/String;"
		);
	}
	inline JString ClipDescription::MIMETYPE_TEXT_URILIST()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_URILIST",
			"Ljava/lang/String;"
		);
	}
	inline JString ClipDescription::MIMETYPE_UNKNOWN()
	{
		return getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ClipDescription::ClipDescription(android::content::ClipDescription &arg0)
		: JObject(
			"android.content.ClipDescription",
			"(Landroid/content/ClipDescription;)V",
			arg0.object()
		) {}
	inline ClipDescription::ClipDescription(JString arg0, JArray arg1)
		: JObject(
			"android.content.ClipDescription",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline jboolean ClipDescription::compareMimeTypes(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.ClipDescription",
			"compareMimeTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint ClipDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JArray ClipDescription::filterMimeTypes(JString arg0) const
	{
		return callObjectMethod(
			"filterMimeTypes",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint ClipDescription::getClassificationStatus() const
	{
		return callMethod<jint>(
			"getClassificationStatus",
			"()I"
		);
	}
	inline jfloat ClipDescription::getConfidenceScore(JString arg0) const
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	inline android::os::PersistableBundle ClipDescription::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JString ClipDescription::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString ClipDescription::getMimeType(jint arg0) const
	{
		return callObjectMethod(
			"getMimeType",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint ClipDescription::getMimeTypeCount() const
	{
		return callMethod<jint>(
			"getMimeTypeCount",
			"()I"
		);
	}
	inline jlong ClipDescription::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	inline jboolean ClipDescription::hasMimeType(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean ClipDescription::isStyledText() const
	{
		return callMethod<jboolean>(
			"isStyledText",
			"()Z"
		);
	}
	inline void ClipDescription::setExtras(android::os::PersistableBundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
	inline JString ClipDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ClipDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
