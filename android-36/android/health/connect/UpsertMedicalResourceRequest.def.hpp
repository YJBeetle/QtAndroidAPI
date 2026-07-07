#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class FhirVersion;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::health::connect
{
	class UpsertMedicalResourceRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UpsertMedicalResourceRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UpsertMedicalResourceRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getData() const;
		JString getDataSourceId() const;
		android::health::connect::datatypes::FhirVersion getFhirVersion() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect

