#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace java::util
{
	class HashMap;
}

namespace android::drm
{
	class DrmEvent : public JObject
	{
	public:
		// Fields
		static JString DRM_INFO_OBJECT();
		static JString DRM_INFO_STATUS_OBJECT();
		static jint TYPE_ALL_RIGHTS_REMOVED();
		static jint TYPE_DRM_INFO_PROCESSED();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAttribute(JString arg0) const;
		JString getMessage() const;
		jint getType() const;
		jint getUniqueId() const;
	};
} // namespace android::drm

