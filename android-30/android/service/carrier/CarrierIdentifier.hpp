#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::service::carrier
{
	class CarrierIdentifier : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierIdentifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierIdentifier(QJniObject obj);
		
		// Constructors
		CarrierIdentifier(JByteArray arg0, JString arg1, JString arg2);
		CarrierIdentifier(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5);
		CarrierIdentifier(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5, jint arg6, jint arg7);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCarrierId() const;
		JString getGid1() const;
		JString getGid2() const;
		JString getImsi() const;
		JString getMcc() const;
		JString getMnc() const;
		jint getSpecificCarrierId() const;
		JString getSpn() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::carrier

