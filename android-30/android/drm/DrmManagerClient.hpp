#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
}
namespace android::drm
{
	class DrmConvertedStatus;
}
namespace android::drm
{
	class DrmInfo;
}
namespace android::drm
{
	class DrmInfoRequest;
}
namespace android::drm
{
	class DrmRights;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::drm
{
	class DrmManagerClient : public JObject
	{
	public:
		// Fields
		static jint ERROR_NONE();
		static jint ERROR_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmManagerClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmManagerClient(QJniObject obj);
		
		// Constructors
		DrmManagerClient(android::content::Context arg0);
		
		// Methods
		android::drm::DrmInfo acquireDrmInfo(android::drm::DrmInfoRequest arg0) const;
		jint acquireRights(android::drm::DrmInfoRequest arg0) const;
		jboolean canHandle(android::net::Uri arg0, JString arg1) const;
		jboolean canHandle(JString arg0, JString arg1) const;
		jint checkRightsStatus(android::net::Uri arg0) const;
		jint checkRightsStatus(JString arg0) const;
		jint checkRightsStatus(android::net::Uri arg0, jint arg1) const;
		jint checkRightsStatus(JString arg0, jint arg1) const;
		void close() const;
		android::drm::DrmConvertedStatus closeConvertSession(jint arg0) const;
		android::drm::DrmConvertedStatus convertData(jint arg0, JByteArray arg1) const;
		JArray getAvailableDrmEngines() const;
		JObject getAvailableDrmSupportInfo() const;
		android::content::ContentValues getConstraints(android::net::Uri arg0, jint arg1) const;
		android::content::ContentValues getConstraints(JString arg0, jint arg1) const;
		jint getDrmObjectType(android::net::Uri arg0, JString arg1) const;
		jint getDrmObjectType(JString arg0, JString arg1) const;
		android::content::ContentValues getMetadata(android::net::Uri arg0) const;
		android::content::ContentValues getMetadata(JString arg0) const;
		JString getOriginalMimeType(android::net::Uri arg0) const;
		JString getOriginalMimeType(JString arg0) const;
		jint openConvertSession(JString arg0) const;
		jint processDrmInfo(android::drm::DrmInfo arg0) const;
		void release() const;
		jint removeAllRights() const;
		jint removeRights(android::net::Uri arg0) const;
		jint removeRights(JString arg0) const;
		jint saveRights(android::drm::DrmRights arg0, JString arg1, JString arg2) const;
		void setOnErrorListener(JObject arg0) const;
		void setOnEventListener(JObject arg0) const;
		void setOnInfoListener(JObject arg0) const;
	};
} // namespace android::drm

