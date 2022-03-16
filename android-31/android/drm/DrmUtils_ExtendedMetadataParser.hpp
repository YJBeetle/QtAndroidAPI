#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::drm
{
	class DrmUtils_ExtendedMetadataParser : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmUtils_ExtendedMetadataParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmUtils_ExtendedMetadataParser(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString get(JString arg0) const;
		JObject iterator() const;
		JObject keyIterator() const;
	};
} // namespace android::drm

