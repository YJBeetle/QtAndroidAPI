#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::drm
{
	class DrmUtils_ExtendedMetadataParser;
}

namespace android::drm
{
	class DrmUtils : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmUtils(QJniObject obj);
		
		// Constructors
		DrmUtils();
		
		// Methods
		static android::drm::DrmUtils_ExtendedMetadataParser getExtendedMetadataParser(JByteArray arg0);
	};
} // namespace android::drm

