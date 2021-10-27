#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::os
{
	class Handler;
}
namespace android::provider
{
	class FontRequest;
}
namespace android::provider
{
	class FontsContract_FontFamilyResult;
}
namespace android::provider
{
	class FontsContract_FontRequestCallback;
}

namespace android::provider
{
	class FontsContract : public __JniBaseClass
	{
	public:
		// Fields
		
		FontsContract(QAndroidJniObject obj);
		// Constructors
		FontsContract() = default;
		
		// Methods
		static QAndroidJniObject buildTypeface(android::content::Context arg0, android::os::CancellationSignal arg1, jarray arg2);
		static QAndroidJniObject fetchFonts(android::content::Context arg0, android::os::CancellationSignal arg1, android::provider::FontRequest arg2);
		static void requestFonts(android::content::Context arg0, android::provider::FontRequest arg1, android::os::Handler arg2, android::os::CancellationSignal arg3, android::provider::FontsContract_FontRequestCallback arg4);
	};
} // namespace android::provider

