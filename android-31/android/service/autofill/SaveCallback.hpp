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
		
		// QJniObject forward
		template<typename ...Ts> explicit SaveCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SaveCallback(QJniObject obj);
		
		// Constructors
		
		// Methods
		void onFailure(jstring arg0);
		void onSuccess();
		void onSuccess(android::content::IntentSender arg0);
	};
} // namespace android::service::autofill

