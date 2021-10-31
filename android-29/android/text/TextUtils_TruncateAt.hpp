#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::text
{
	class TextUtils_TruncateAt : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject END();
		static QAndroidJniObject MARQUEE();
		static QAndroidJniObject MIDDLE();
		static QAndroidJniObject START();
		
		TextUtils_TruncateAt(QAndroidJniObject obj);
		// Constructors
		TextUtils_TruncateAt() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text

