#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::displayhash
{
	class VerifiedDisplayHash : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VerifiedDisplayHash(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedDisplayHash(QAndroidJniObject obj);
		
		// Constructors
		VerifiedDisplayHash(jlong arg0, android::graphics::Rect arg1, JString arg2, JByteArray arg3);
		
		// Methods
		jint describeContents();
		android::graphics::Rect getBoundsInWindow();
		JString getHashAlgorithm();
		JByteArray getImageHash();
		jlong getTimeMillis();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::displayhash

