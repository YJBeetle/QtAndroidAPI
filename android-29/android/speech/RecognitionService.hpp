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
		
		RecognitionService(QAndroidJniObject obj);
		// Constructors
		RecognitionService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onDestroy();
	};
} // namespace android::speech

