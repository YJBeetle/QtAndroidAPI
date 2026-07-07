#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::health::connect
{
	class MedicalResourceId : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MedicalResourceId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MedicalResourceId(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MedicalResourceId(JString arg0, jint arg1, JString arg2);
		
		// Methods
		static android::health::connect::MedicalResourceId fromFhirReference(JString arg0, JString arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDataSourceId() const;
		JString getFhirResourceId() const;
		jint getFhirResourceType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect

