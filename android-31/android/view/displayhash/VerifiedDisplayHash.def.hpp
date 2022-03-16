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
		
		// QJniObject forward
		template<typename ...Ts> explicit VerifiedDisplayHash(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedDisplayHash(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VerifiedDisplayHash(jlong arg0, android::graphics::Rect arg1, JString arg2, JByteArray arg3);
		
		// Methods
		jint describeContents() const;
		android::graphics::Rect getBoundsInWindow() const;
		JString getHashAlgorithm() const;
		JByteArray getImageHash() const;
		jlong getTimeMillis() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::displayhash

