#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class BlockedNumberContract_BlockedNumbers : public __JniBaseClass
	{
	public:
		// Fields
		static jstring COLUMN_E164_NUMBER();
		static jstring COLUMN_ID();
		static jstring COLUMN_ORIGINAL_NUMBER();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		BlockedNumberContract_BlockedNumbers(QAndroidJniObject obj);
		// Constructors
		BlockedNumberContract_BlockedNumbers() = default;
		
		// Methods
	};
} // namespace android::provider

