#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssAntennaInfo_SphericalCorrections : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo_SphericalCorrections(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo_SphericalCorrections(QJniObject obj);
		
		// Constructors
		GnssAntennaInfo_SphericalCorrections(jarray arg0, jarray arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getCorrectionUncertaintiesArray();
		jarray getCorrectionsArray();
		jdouble getDeltaPhi();
		jdouble getDeltaTheta();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

