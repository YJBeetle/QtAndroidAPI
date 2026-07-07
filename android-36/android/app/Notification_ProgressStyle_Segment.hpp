#pragma once

#include "../../JObject.hpp"
#include "./Notification_ProgressStyle_Segment.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_ProgressStyle_Segment::Notification_ProgressStyle_Segment(jint arg0)
		: JObject(
			"android.app.Notification$ProgressStyle$Segment",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jboolean Notification_ProgressStyle_Segment::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Notification_ProgressStyle_Segment::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline jint Notification_ProgressStyle_Segment::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint Notification_ProgressStyle_Segment::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jint Notification_ProgressStyle_Segment::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::app::Notification_ProgressStyle_Segment Notification_ProgressStyle_Segment::setColor(jint arg0) const
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$ProgressStyle$Segment;",
			arg0
		);
	}
	inline android::app::Notification_ProgressStyle_Segment Notification_ProgressStyle_Segment::setId(jint arg0) const
	{
		return callObjectMethod(
			"setId",
			"(I)Landroid/app/Notification$ProgressStyle$Segment;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
