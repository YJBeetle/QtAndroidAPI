#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::service::autofill
{
	class FillResponse;
}

namespace android::service::autofill
{
	class FillCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FillCallback(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void onFailure(jstring arg0);
		void onSuccess(android::service::autofill::FillResponse arg0);
	};
} // namespace android::service::autofill

