#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class FhirVersion;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class MedicalDataSource : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MedicalDataSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MedicalDataSource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDisplayName() const;
		android::net::Uri getFhirBaseUri() const;
		android::health::connect::datatypes::FhirVersion getFhirVersion() const;
		JString getId() const;
		java::time::Instant getLastDataUpdateTime() const;
		JString getPackageName() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::datatypes

