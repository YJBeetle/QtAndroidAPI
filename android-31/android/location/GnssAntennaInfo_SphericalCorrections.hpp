#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssAntennaInfo_SphericalCorrections : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo_SphericalCorrections(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo_SphericalCorrections(QAndroidJniObject obj);
		
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

