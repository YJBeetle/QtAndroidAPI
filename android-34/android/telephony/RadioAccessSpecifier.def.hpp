#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class RadioAccessSpecifier : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RadioAccessSpecifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RadioAccessSpecifier(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RadioAccessSpecifier(jint arg0, JIntArray arg1, JIntArray arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JIntArray getBands() const;
		JIntArray getChannels() const;
		jint getRadioAccessNetwork() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

