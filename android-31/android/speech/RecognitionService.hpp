#pragma once

#include "../../JObject.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

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
	class RecognitionService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService(QJniObject obj);
		
		// Constructors
		RecognitionService();
		
		// Methods
		android::content::Context createContext(android::content::ContextParams arg0);
		JObject onBind(android::content::Intent arg0);
		void onDestroy();
	};
} // namespace android::speech

