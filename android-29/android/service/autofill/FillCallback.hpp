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
		
		FillCallback(QAndroidJniObject obj);
		// Constructors
		FillCallback() = default;
		
		// Methods
		void onFailure(jstring arg0);
		void onSuccess(android::service::autofill::FillResponse arg0);
	};
} // namespace android::service::autofill

