#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class Checksum : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TYPE_PARTIAL_MERKLE_ROOT_1M_SHA256();
		static jint TYPE_PARTIAL_MERKLE_ROOT_1M_SHA512();
		static jint TYPE_WHOLE_MD5();
		static jint TYPE_WHOLE_MERKLE_ROOT_4K_SHA256();
		static jint TYPE_WHOLE_SHA1();
		static jint TYPE_WHOLE_SHA256();
		static jint TYPE_WHOLE_SHA512();
		
		// QJniObject forward
		template<typename ...Ts> explicit Checksum(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Checksum(QJniObject obj);
		
		// Constructors
		Checksum(jint arg0, jbyteArray arg1);
		
		// Methods
		jint describeContents();
		jint getType();
		jbyteArray getValue();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

