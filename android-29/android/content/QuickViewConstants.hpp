#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::content
{
	class QuickViewConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE_DELETE();
		static jstring FEATURE_DOWNLOAD();
		static jstring FEATURE_EDIT();
		static jstring FEATURE_PRINT();
		static jstring FEATURE_SEND();
		static jstring FEATURE_VIEW();
		
		QuickViewConstants(QAndroidJniObject obj);
		// Constructors
		QuickViewConstants() = default;
		
		// Methods
	};
} // namespace android::content

