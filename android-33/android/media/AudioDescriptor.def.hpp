#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class AudioDescriptor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STANDARD_EDID();
		static jint STANDARD_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioDescriptor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JByteArray getDescriptor() const;
		jint getEncapsulationType() const;
		jint getStandard() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

