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
		
		// QJniObject forward
		template<typename ...Ts> explicit FontsContract_FontFamilyResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FontsContract_FontFamilyResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getFonts();
		jint getStatusCode();
	};
} // namespace android::provider

