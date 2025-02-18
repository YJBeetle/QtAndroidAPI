#pragma once

#include "../graphics/Rect.def.hpp"
#include "../../JString.hpp"
#include "./MediaFormat_QpOffsetRect.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaFormat_QpOffsetRect::MediaFormat_QpOffsetRect(android::graphics::Rect arg0, jint arg1)
		: JObject(
			"android.media.MediaFormat$QpOffsetRect",
			"(Landroid/graphics/Rect;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline JString MediaFormat_QpOffsetRect::flattenToString(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaFormat$QpOffsetRect",
			"flattenToString",
			"(Ljava/util/List;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString MediaFormat_QpOffsetRect::flattenToString() const
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaFormat_QpOffsetRect::set(android::graphics::Rect arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
