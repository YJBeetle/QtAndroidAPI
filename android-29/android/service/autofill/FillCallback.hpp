#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class FillResponse;
}
class JString;

namespace android::service::autofill
{
	class FillCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillCallback(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void onFailure(JString arg0) const;
		void onSuccess(android::service::autofill::FillResponse arg0) const;
	};
} // namespace android::service::autofill

