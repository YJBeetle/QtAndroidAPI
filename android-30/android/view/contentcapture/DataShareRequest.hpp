#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view::contentcapture
{
	class DataShareRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DataShareRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataShareRequest(QJniObject obj);
		
		// Constructors
		DataShareRequest(android::content::LocusId arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::content::LocusId getLocusId() const;
		JString getMimeType() const;
		JString getPackageName() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::contentcapture

