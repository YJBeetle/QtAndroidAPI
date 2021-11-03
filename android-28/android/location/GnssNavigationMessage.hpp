#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::location
{
	class GnssNavigationMessage : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATUS_PARITY_PASSED();
		static jint STATUS_PARITY_REBUILT();
		static jint STATUS_UNKNOWN();
		static jint TYPE_BDS_D1();
		static jint TYPE_BDS_D2();
		static jint TYPE_GAL_F();
		static jint TYPE_GAL_I();
		static jint TYPE_GLO_L1CA();
		static jint TYPE_GPS_CNAV2();
		static jint TYPE_GPS_L1CA();
		static jint TYPE_GPS_L2CNAV();
		static jint TYPE_GPS_L5CNAV();
		static jint TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssNavigationMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssNavigationMessage(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JByteArray getData() const;
		jint getMessageId() const;
		jint getStatus() const;
		jint getSubmessageId() const;
		jint getSvid() const;
		jint getType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

