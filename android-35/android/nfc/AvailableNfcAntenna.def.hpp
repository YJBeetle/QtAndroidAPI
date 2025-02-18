#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::nfc
{
	class AvailableNfcAntenna : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AvailableNfcAntenna(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AvailableNfcAntenna(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AvailableNfcAntenna(jint arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getLocationX() const;
		jint getLocationY() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::nfc

