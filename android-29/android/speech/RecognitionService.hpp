#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecognitionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService(QAndroidJniObject obj);
		
		// Constructors
		RecognitionService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		void onDestroy();
	};
} // namespace android::speech

