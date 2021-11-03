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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowserService_Result(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowserService_Result(QJniObject obj);
		
		// Constructors
		
		// Methods
		void detach();
		void sendResult(JObject arg0);
	};
} // namespace android::service::media

