#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::res
{
	class ObbInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint OBB_OVERLAY();
		JString filename();
		jint flags();
		JString packageName();
		jint version();
		
		// QJniObject forward
		template<typename ...Ts> explicit ObbInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObbInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::res

