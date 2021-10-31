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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QAndroidJniObject obj);
		
		// Constructors
		Formatter();
		
		// Methods
		static jstring formatFileSize(android::content::Context arg0, jlong arg1);
		static jstring formatIpAddress(jint arg0);
		static jstring formatShortFileSize(android::content::Context arg0, jlong arg1);
	};
} // namespace android::text::format

