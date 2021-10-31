#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::displayhash
{
	class VerifiedDisplayHash : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VerifiedDisplayHash(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedDisplayHash(QJniObject obj);
		
		// Constructors
		VerifiedDisplayHash(jlong arg0, android::graphics::Rect arg1, jstring arg2, jbyteArray arg3);
		
		// Methods
		jint describeContents();
		android::graphics::Rect getBoundsInWindow();
		jstring getHashAlgorithm();
		jbyteArray getImageHash();
		jlong getTimeMillis();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::displayhash

