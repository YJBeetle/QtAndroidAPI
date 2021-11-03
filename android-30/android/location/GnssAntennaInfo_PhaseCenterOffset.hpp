#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssAntennaInfo_PhaseCenterOffset : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo_PhaseCenterOffset(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo_PhaseCenterOffset(QAndroidJniObject obj);
		
		// Constructors
		GnssAntennaInfo_PhaseCenterOffset(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5);
		
		// Methods
		jint describeContents();
		jdouble getXOffsetMm();
		jdouble getXOffsetUncertaintyMm();
		jdouble getYOffsetMm();
		jdouble getYOffsetUncertaintyMm();
		jdouble getZOffsetMm();
		jdouble getZOffsetUncertaintyMm();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

