#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::view
{
	class View;
}

namespace android::text
{
	class AutoText : public __JniBaseClass
	{
	public:
		// Fields
		
		AutoText(QAndroidJniObject obj);
		// Constructors
		AutoText() = default;
		
		// Methods
		static jstring get(jstring arg0, jint arg1, jint arg2, android::view::View arg3);
		static jstring get(const QString &arg0, jint arg1, jint arg2, android::view::View arg3);
		static jint getSize(android::view::View arg0);
	};
} // namespace android::text

