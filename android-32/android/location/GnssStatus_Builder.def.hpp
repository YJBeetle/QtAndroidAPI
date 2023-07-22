#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssStatus;
}

namespace android::location
{
	class GnssStatus_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssStatus_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssStatus_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GnssStatus_Builder();
		
		// Methods
		android::location::GnssStatus_Builder addSatellite(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jboolean arg5, jboolean arg6, jboolean arg7, jboolean arg8, jfloat arg9, jboolean arg10, jfloat arg11) const;
		android::location::GnssStatus build() const;
		android::location::GnssStatus_Builder clearSatellites() const;
	};
} // namespace android::location

