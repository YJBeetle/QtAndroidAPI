#pragma once

#include "../../JObject.hpp"
#include "./Notification_ProgressStyle_Point.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_ProgressStyle_Point::Notification_ProgressStyle_Point(jint arg0)
		: JObject(
			"android.app.Notification$ProgressStyle$Point",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jboolean Notification_ProgressStyle_Point::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Notification_ProgressStyle_Point::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline jint Notification_ProgressStyle_Point::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint Notification_ProgressStyle_Point::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	inline jint Notification_ProgressStyle_Point::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::app::Notification_ProgressStyle_Point Notification_ProgressStyle_Point::setColor(jint arg0) const
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$ProgressStyle$Point;",
			arg0
		);
	}
	inline android::app::Notification_ProgressStyle_Point Notification_ProgressStyle_Point::setId(jint arg0) const
	{
		return callObjectMethod(
			"setId",
			"(I)Landroid/app/Notification$ProgressStyle$Point;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
