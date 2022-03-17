#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class IntentSender;
}
class JString;

namespace android::service::autofill
{
	class SaveCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SaveCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SaveCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void onFailure(JString arg0) const;
		void onSuccess() const;
		void onSuccess(android::content::IntentSender arg0) const;
	};
} // namespace android::service::autofill

