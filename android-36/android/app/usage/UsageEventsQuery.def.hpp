#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class UsageEventsQuery : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsageEventsQuery(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsageEventsQuery(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getBeginTimeMillis() const;
		jlong getEndTimeMillis() const;
		JIntArray getEventTypes() const;
		JObject getPackageNames() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

