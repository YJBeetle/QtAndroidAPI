#pragma once

#include "../../../JObject.hpp"

namespace android::service::media
{
	class MediaBrowserService;
}
class JObject;

namespace android::service::media
{
	class MediaBrowserService_Result : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaBrowserService_Result(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowserService_Result(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void detach() const;
		void sendResult(JObject arg0) const;
	};
} // namespace android::service::media

