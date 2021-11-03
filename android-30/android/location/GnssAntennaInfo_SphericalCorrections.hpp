#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

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
		GnssAntennaInfo_SphericalCorrections(JArray arg0, JArray arg1);
		
		// Methods
		jint describeContents() const;
		JArray getCorrectionUncertaintiesArray() const;
		JArray getCorrectionsArray() const;
		jdouble getDeltaPhi() const;
		jdouble getDeltaTheta() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

