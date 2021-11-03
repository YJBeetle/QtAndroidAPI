#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class ApplicationErrorReport_AnrInfo : public JObject
	{
	public:
		// Fields
		JString activity();
		JString cause();
		JString info();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_AnrInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_AnrInfo(QAndroidJniObject obj);
		
		// Constructors
		ApplicationErrorReport_AnrInfo();
		ApplicationErrorReport_AnrInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(JObject arg0, JString arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

