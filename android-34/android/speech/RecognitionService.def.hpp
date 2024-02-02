#pragma once

#include "../app/Service.def.hpp"

namespace android::content
{
	class AttributionSource;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class ContextParams;
}
namespace android::content
{
	class Intent;
}
namespace android::speech
{
	class RecognitionService_Callback;
}
namespace android::speech
{
	class RecognitionService_SupportCallback;
}
class JString;

namespace android::speech
{
	class RecognitionService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		RecognitionService();
		
		// Methods
		android::content::Context createContext(android::content::ContextParams arg0) const;
		jint getMaxConcurrentSessionsCount() const;
		JObject onBind(android::content::Intent arg0) const;
		void onCheckRecognitionSupport(android::content::Intent arg0, android::speech::RecognitionService_SupportCallback arg1) const;
		void onCheckRecognitionSupport(android::content::Intent arg0, android::content::AttributionSource arg1, android::speech::RecognitionService_SupportCallback arg2) const;
		void onDestroy() const;
		void onTriggerModelDownload(android::content::Intent arg0) const;
		void onTriggerModelDownload(android::content::Intent arg0, android::content::AttributionSource arg1) const;
		void onTriggerModelDownload(android::content::Intent arg0, android::content::AttributionSource arg1, JObject arg2) const;
	};
} // namespace android::speech

