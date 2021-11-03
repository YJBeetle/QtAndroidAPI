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
		
		// QJniObject forward
		template<typename ...Ts> explicit BlobHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlobHandle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::blob::BlobHandle createWithSha256(JByteArray arg0, JString arg1, jlong arg2, JString arg3);
		jint describeContents();
		jboolean equals(JObject arg0);
		jlong getExpiryTimeMillis();
		JString getLabel();
		JByteArray getSha256Digest();
		JString getTag();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::blob

