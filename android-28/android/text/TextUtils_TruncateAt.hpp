#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::text
{
	class TextUtils_TruncateAt : public java::lang::Enum
	{
	public:
		// Fields
		static android::text::TextUtils_TruncateAt END();
		static android::text::TextUtils_TruncateAt END_SMALL();
		static android::text::TextUtils_TruncateAt MARQUEE();
		static android::text::TextUtils_TruncateAt MIDDLE();
		static android::text::TextUtils_TruncateAt START();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextUtils_TruncateAt(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TextUtils_TruncateAt(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::TextUtils_TruncateAt valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text

