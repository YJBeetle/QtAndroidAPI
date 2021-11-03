#include "./LocationRequest.hpp"
#include "./LocationRequest_Builder.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	LocationRequest_Builder::LocationRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocationRequest_Builder::LocationRequest_Builder(android::location::LocationRequest arg0)
		: JObject(
			"android.location.LocationRequest$Builder",
			"(Landroid/location/LocationRequest;)V",
			arg0.object()
		) {}
	LocationRequest_Builder::LocationRequest_Builder(jlong arg0)
		: JObject(
			"android.location.LocationRequest$Builder",
			"(J)V",
			arg0
		) {}
	
	// Methods
	android::location::LocationRequest LocationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/LocationRequest;"
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::clearMinUpdateIntervalMillis() const
	{
		return callObjectMethod(
			"clearMinUpdateIntervalMillis",
			"()Landroid/location/LocationRequest$Builder;"
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::setDurationMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setDurationMillis",
			"(J)Landroid/location/LocationRequest$Builder;",
			arg0
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::setIntervalMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setIntervalMillis",
			"(J)Landroid/location/LocationRequest$Builder;",
			arg0
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::setMaxUpdateDelayMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setMaxUpdateDelayMillis",
			"(J)Landroid/location/LocationRequest$Builder;",
			arg0
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::setMaxUpdates(jint arg0) const
	{
		return callObjectMethod(
			"setMaxUpdates",
			"(I)Landroid/location/LocationRequest$Builder;",
			arg0
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::setMinUpdateDistanceMeters(jfloat arg0) const
	{
		return callObjectMethod(
			"setMinUpdateDistanceMeters",
			"(F)Landroid/location/LocationRequest$Builder;",
			arg0
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::setMinUpdateIntervalMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setMinUpdateIntervalMillis",
			"(J)Landroid/location/LocationRequest$Builder;",
			arg0
		);
	}
	android::location::LocationRequest_Builder LocationRequest_Builder::setQuality(jint arg0) const
	{
		return callObjectMethod(
			"setQuality",
			"(I)Landroid/location/LocationRequest$Builder;",
			arg0
		);
	}
} // namespace android::location

