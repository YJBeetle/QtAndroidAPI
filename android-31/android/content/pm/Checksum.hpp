#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class Checksum : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_PARTIAL_MERKLE_ROOT_1M_SHA256();
		static jint TYPE_PARTIAL_MERKLE_ROOT_1M_SHA512();
		static jint TYPE_WHOLE_MD5();
		static jint TYPE_WHOLE_MERKLE_ROOT_4K_SHA256();
		static jint TYPE_WHOLE_SHA1();
		static jint TYPE_WHOLE_SHA256();
		static jint TYPE_WHOLE_SHA512();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Checksum(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Checksum(QAndroidJniObject obj);
		
		// Constructors
		Checksum(jint arg0, JByteArray arg1);
		
		// Methods
		jint describeContents();
		jint getType();
		JByteArray getValue();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

