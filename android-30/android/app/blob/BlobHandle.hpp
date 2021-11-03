#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::blob
{
	class BlobHandle : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BlobHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlobHandle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::blob::BlobHandle createWithSha256(jbyteArray arg0, jstring arg1, jlong arg2, jstring arg3);
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getExpiryTimeMillis();
		jstring getLabel();
		jbyteArray getSha256Digest();
		jstring getTag();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::blob

