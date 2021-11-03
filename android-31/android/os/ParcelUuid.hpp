#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::util
{
	class UUID;
}

namespace android::os
{
	class ParcelUuid : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ParcelUuid(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParcelUuid(QJniObject obj);
		
		// Constructors
		ParcelUuid(java::util::UUID arg0);
		
		// Methods
		static android::os::ParcelUuid fromString(JString arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::util::UUID getUuid() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

