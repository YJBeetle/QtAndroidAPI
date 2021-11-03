#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::location
{
	class GnssAntennaInfo_SphericalCorrections : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo_SphericalCorrections(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo_SphericalCorrections(QAndroidJniObject obj);
		
		// Constructors
		GnssAntennaInfo_SphericalCorrections(JArray arg0, JArray arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JArray getCorrectionUncertaintiesArray();
		JArray getCorrectionsArray();
		jdouble getDeltaPhi();
		jdouble getDeltaTheta();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

