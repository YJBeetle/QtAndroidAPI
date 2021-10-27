#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class FontsContract_FontFamilyResult : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_OK();
		static jint STATUS_REJECTED();
		static jint STATUS_UNEXPECTED_DATA_PROVIDED();
		static jint STATUS_WRONG_CERTIFICATES();
		
		FontsContract_FontFamilyResult(QAndroidJniObject obj);
		// Constructors
		FontsContract_FontFamilyResult() = default;
		
		// Methods
		jarray getFonts();
		jint getStatusCode();
	};
} // namespace android::provider

