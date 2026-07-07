#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;

namespace android::media
{
	class MediaDrm_KeyRequest : public JObject
	{
	public:
		// Fields
		static jint REQUEST_TYPE_INITIAL();
		static jint REQUEST_TYPE_NONE();
		static jint REQUEST_TYPE_RELEASE();
		static jint REQUEST_TYPE_RENEWAL();
		static jint REQUEST_TYPE_UPDATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_KeyRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_KeyRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getData() const;
		JString getDefaultUrl() const;
		jint getRequestType() const;
	};
} // namespace android::media

