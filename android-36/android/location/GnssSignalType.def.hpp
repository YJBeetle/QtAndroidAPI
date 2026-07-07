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
	class GnssSignalType : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssSignalType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssSignalType(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::location::GnssSignalType create(jint arg0, jdouble arg1, JString arg2);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jdouble getCarrierFrequencyHz() const;
		JString getCodeType() const;
		jint getConstellationType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

