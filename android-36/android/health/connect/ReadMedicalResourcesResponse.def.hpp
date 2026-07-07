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
	class ReadMedicalResourcesResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadMedicalResourcesResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadMedicalResourcesResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReadMedicalResourcesResponse(JObject arg0, JString arg1, jint arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getMedicalResources() const;
		JString getNextPageToken() const;
		jint getRemainingCount() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect

