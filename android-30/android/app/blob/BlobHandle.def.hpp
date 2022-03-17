#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::app::blob
{
	class BlobHandle : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlobHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlobHandle(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::app::blob::BlobHandle createWithSha256(JByteArray arg0, JString arg1, jlong arg2, JString arg3);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jlong getExpiryTimeMillis() const;
		JString getLabel() const;
		JByteArray getSha256Digest() const;
		JString getTag() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::blob

