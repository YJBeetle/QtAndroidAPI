#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class JsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		JsResult(QAndroidJniObject obj);
		// Constructors
		JsResult() = default;
		
		// Methods
		void cancel();
		void confirm();
	};
} // namespace android::webkit

