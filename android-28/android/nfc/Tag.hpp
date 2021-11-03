#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::nfc
{
	class Tag : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Tag(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Tag(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JByteArray getId() const;
		JArray getTechList() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::nfc

