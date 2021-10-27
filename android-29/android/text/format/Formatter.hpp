#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::text::format
{
	class Formatter : public __JniBaseClass
	{
	public:
		// Fields
		
		Formatter(QAndroidJniObject obj);
		// Constructors
		Formatter();
		
		// Methods
		static jstring formatFileSize(android::content::Context arg0, jlong arg1);
		static jstring formatIpAddress(jint arg0);
		static jstring formatShortFileSize(android::content::Context arg0, jlong arg1);
	};
} // namespace android::text::format

