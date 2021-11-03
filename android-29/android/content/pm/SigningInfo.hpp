#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class SigningInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SigningInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SigningInfo(QJniObject obj);
		
		// Constructors
		SigningInfo();
		SigningInfo(android::content::pm::SigningInfo &arg0);
		
		// Methods
		jint describeContents() const;
		JArray getApkContentsSigners() const;
		JArray getSigningCertificateHistory() const;
		jboolean hasMultipleSigners() const;
		jboolean hasPastSigningCertificates() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

