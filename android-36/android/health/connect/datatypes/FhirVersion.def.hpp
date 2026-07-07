#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::health::connect::datatypes
{
	class FhirVersion : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FhirVersion(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FhirVersion(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::health::connect::datatypes::FhirVersion parseFhirVersion(JString arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getMajor() const;
		jint getMinor() const;
		jint getPatch() const;
		jint hashCode() const;
		jboolean isSupportedFhirVersion() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::datatypes

