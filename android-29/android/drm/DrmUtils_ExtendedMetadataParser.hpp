#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;

namespace android::drm
{
	class DrmUtils_ExtendedMetadataParser : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmUtils_ExtendedMetadataParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmUtils_ExtendedMetadataParser(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString get(JString arg0);
		JObject iterator();
		JObject keyIterator();
	};
} // namespace android::drm

