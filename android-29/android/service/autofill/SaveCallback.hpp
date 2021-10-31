#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class IntentSender;
}

namespace android::service::autofill
{
	class SaveCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		SaveCallback(QAndroidJniObject obj);
		// Constructors
		SaveCallback() = default;
		
		// Methods
		void onFailure(jstring arg0);
		void onSuccess();
		void onSuccess(android::content::IntentSender arg0);
	};
} // namespace android::service::autofill

