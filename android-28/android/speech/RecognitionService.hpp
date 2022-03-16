#pragma once

#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::speech
{
	class RecognitionService_Callback;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecognitionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		RecognitionService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onDestroy() const;
	};
} // namespace android::speech

