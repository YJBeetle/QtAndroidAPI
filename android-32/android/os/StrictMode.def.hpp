#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class StrictMode_ThreadPolicy;
}
namespace android::os
{
	class StrictMode_VmPolicy;
}
class JString;

namespace android::os
{
	class StrictMode : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StrictMode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::os::StrictMode_ThreadPolicy allowThreadDiskReads();
		static android::os::StrictMode_ThreadPolicy allowThreadDiskWrites();
		static void enableDefaults();
		static android::os::StrictMode_ThreadPolicy getThreadPolicy();
		static android::os::StrictMode_VmPolicy getVmPolicy();
		static void noteSlowCall(JString arg0);
		static void setThreadPolicy(android::os::StrictMode_ThreadPolicy arg0);
		static void setVmPolicy(android::os::StrictMode_VmPolicy arg0);
	};
} // namespace android::os

