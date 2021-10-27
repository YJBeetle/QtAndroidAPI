#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::gesture
{
	class GestureLibrary;
}
namespace java::io
{
	class File;
}

namespace android::gesture
{
	class GestureLibraries : public __JniBaseClass
	{
	public:
		// Fields
		
		GestureLibraries(QAndroidJniObject obj);
		// Constructors
		GestureLibraries() = default;
		
		// Methods
		static QAndroidJniObject fromFile(java::io::File arg0);
		static QAndroidJniObject fromFile(jstring arg0);
		static QAndroidJniObject fromFile(const QString &arg0);
		static QAndroidJniObject fromPrivateFile(android::content::Context arg0, jstring arg1);
		static QAndroidJniObject fromPrivateFile(android::content::Context arg0, const QString &arg1);
		static QAndroidJniObject fromRawResource(android::content::Context arg0, jint arg1);
	};
} // namespace android::gesture

