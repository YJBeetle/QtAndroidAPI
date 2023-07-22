#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::location
{
	class GnssAntennaInfo_PhaseCenterOffset : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo_PhaseCenterOffset(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo_PhaseCenterOffset(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GnssAntennaInfo_PhaseCenterOffset(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jdouble getXOffsetMm() const;
		jdouble getXOffsetUncertaintyMm() const;
		jdouble getYOffsetMm() const;
		jdouble getYOffsetUncertaintyMm() const;
		jdouble getZOffsetMm() const;
		jdouble getZOffsetUncertaintyMm() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

