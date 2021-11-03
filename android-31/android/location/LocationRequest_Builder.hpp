#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class LocationRequest;
}

namespace android::location
{
	class LocationRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocationRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocationRequest_Builder(QJniObject obj);
		
		// Constructors
		LocationRequest_Builder(android::location::LocationRequest arg0);
		LocationRequest_Builder(jlong arg0);
		
		// Methods
		android::location::LocationRequest build() const;
		android::location::LocationRequest_Builder clearMinUpdateIntervalMillis() const;
		android::location::LocationRequest_Builder setDurationMillis(jlong arg0) const;
		android::location::LocationRequest_Builder setIntervalMillis(jlong arg0) const;
		android::location::LocationRequest_Builder setMaxUpdateDelayMillis(jlong arg0) const;
		android::location::LocationRequest_Builder setMaxUpdates(jint arg0) const;
		android::location::LocationRequest_Builder setMinUpdateDistanceMeters(jfloat arg0) const;
		android::location::LocationRequest_Builder setMinUpdateIntervalMillis(jlong arg0) const;
		android::location::LocationRequest_Builder setQuality(jint arg0) const;
	};
} // namespace android::location

