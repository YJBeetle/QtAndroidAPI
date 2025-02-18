#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class LauncherApps_ArchiveCompatibilityParams : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherApps_ArchiveCompatibilityParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps_ArchiveCompatibilityParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LauncherApps_ArchiveCompatibilityParams();
		
		// Methods
		void setEnableIconOverlay(jboolean arg0) const;
		void setEnableUnarchivalConfirmation(jboolean arg0) const;
	};
} // namespace android::content::pm

